__int64 __fastcall ruff_python_formatter::string::docstring::CodeExample::add_start(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v4; // r13
  __int64 v5; // rbp
  __int128 v6; // xmm0
  char **v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm0
  char **v18; // [rsp+0h] [rbp-138h] BYREF
  __int128 v19; // [rsp+8h] [rbp-130h]
  __int128 v20; // [rsp+18h] [rbp-120h]
  __int64 v21; // [rsp+28h] [rbp-110h]
  _OWORD v22[2]; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+70h] [rbp-C8h]
  _OWORD v24[4]; // [rsp+78h] [rbp-C0h] BYREF
  _OWORD v25[8]; // [rsp+B8h] [rbp-80h] BYREF

  if ( *(_QWORD *)a1 != 0x8000000000000003LL )
  {
    v18 = &off_57F1B8;
    *(_QWORD *)&v19 = 1LL;
    *((_QWORD *)&v19 + 1) = 8LL;
    v20 = 0LL;
    core::panicking::panic_fmt(&v18, &off_57F1C8);
  }
  ruff_python_formatter::string::docstring::CodeExampleDoctest::new(v22);
  if ( *(_QWORD *)&v22[0] == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(
      0x8000000000000000LL,
      *((_QWORD *)&v22[0] + 1));
    v4 = *a2;
    v5 = a2[1];
    ruff_python_formatter::string::docstring::CodeExampleRst::new(v25, *a2, v5);
    if ( *(_QWORD *)&v25[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(
        0x8000000000000000LL,
        *((_QWORD *)&v25[0] + 1));
      ruff_python_formatter::string::docstring::CodeExampleMarkdown::new(v24, v4, v5);
      if ( *(_QWORD *)&v24[0] == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(
          0x8000000000000000LL,
          *((_QWORD *)&v24[0] + 1));
        v21 = a2[4];
        v6 = *(_OWORD *)a2;
        v20 = *((_OWORD *)a2 + 1);
        v19 = v6;
        v18 = (char **)0x8000000000000003LL;
        v7 = &off_57F228;
      }
      else
      {
        core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a1);
        *(_QWORD *)a1 = 0x8000000000000002LL;
        v13 = v24[1];
        v14 = v24[2];
        v15 = v24[3];
        *(_OWORD *)(a1 + 8) = v24[0];
        *(_OWORD *)(a1 + 24) = v13;
        *(_OWORD *)(a1 + 40) = v14;
        *(_OWORD *)(a1 + 56) = v15;
        v21 = a2[4];
        v16 = *(_OWORD *)a2;
        v20 = *((_OWORD *)a2 + 1);
        v19 = v16;
        v18 = (char **)0x8000000000000003LL;
        v7 = &off_57F210;
      }
    }
    else
    {
      core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a1);
      *(_OWORD *)(a1 + 64) = v25[4];
      v9 = v25[0];
      v10 = v25[1];
      v11 = v25[2];
      *(_OWORD *)(a1 + 48) = v25[3];
      *(_OWORD *)(a1 + 32) = v11;
      *(_OWORD *)(a1 + 16) = v10;
      *(_OWORD *)a1 = v9;
      v21 = a2[4];
      v12 = *(_OWORD *)a2;
      v20 = *((_OWORD *)a2 + 1);
      v19 = v12;
      v18 = (char **)0x8000000000000003LL;
      v7 = &off_57F1F8;
    }
  }
  else
  {
    core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a1);
    *(_QWORD *)a1 = 0x8000000000000000LL;
    v8 = v22[1];
    *(_OWORD *)(a1 + 8) = v22[0];
    *(_OWORD *)(a1 + 24) = v8;
    *(_QWORD *)(a1 + 40) = v23;
    v18 = (char **)0x8000000000000004LL;
    v7 = &off_57F1E0;
  }
  return alloc::collections::vec_deque::VecDeque<T,A>::push_back(a3, &v18, v7);
}