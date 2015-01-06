
#include "stdafx.h"

#include <crtdbg.h>
#include <windows.h>

#include "art/art.h"

#include "check.h"
#include "test_art.h"

int _tmain(int argc, _TCHAR* argv[])
{
    void *tc1 = NULL;

    //_CrtSetDbgFlag ( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );    

    SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX | SEM_NOOPENFILEERRORBOX);

    _CrtSetReportMode(_CRT_ASSERT, _CRTDBG_MODE_DEBUG);
    _CrtSetReportMode(_CRT_ERROR, _CRTDBG_MODE_DEBUG);

    tcase_add_test(tc1, test_art_init_and_destroy);
    tcase_add_test(tc1, test_art_insert);
    tcase_add_test(tc1, test_art_insert_verylong);
    tcase_add_test(tc1, test_art_insert_search);
    tcase_add_test(tc1, test_art_insert_delete);
    tcase_add_test(tc1, test_art_insert_iter);
    tcase_add_test(tc1, test_art_iter_prefix);
    tcase_add_test(tc1, test_art_long_prefix);
    tcase_add_test(tc1, test_art_insert_search_uuid);

    printf("art_tests finished");
	return 0;
}

