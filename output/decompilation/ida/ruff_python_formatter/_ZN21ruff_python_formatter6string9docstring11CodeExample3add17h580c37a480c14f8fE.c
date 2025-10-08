__int64 __fastcall ruff_python_formatter::string::docstring::CodeExample::add(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int128 *v6; // r13
  unsigned __int64 v7; // rdx
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 result; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // [rsp+0h] [rbp-188h]
  __int128 v19; // [rsp+0h] [rbp-188h]
  __int128 v20; // [rsp+0h] [rbp-188h]
  __int128 v21; // [rsp+10h] [rbp-178h]
  __int128 v22; // [rsp+10h] [rbp-178h]
  __int128 v23; // [rsp+10h] [rbp-178h]
  __int128 v24; // [rsp+20h] [rbp-168h]
  __int64 v25; // [rsp+20h] [rbp-168h]
  __int128 v26; // [rsp+20h] [rbp-168h]
  __int128 v27; // [rsp+30h] [rbp-158h]
  __int128 v28; // [rsp+30h] [rbp-158h]
  __int128 v29; // [rsp+40h] [rbp-148h]
  __int128 v30; // [rsp+50h] [rbp-138h] BYREF
  __int128 v31; // [rsp+60h] [rbp-128h]
  __int128 v32; // [rsp+70h] [rbp-118h]
  __int128 v33; // [rsp+80h] [rbp-108h]
  __int128 v34; // [rsp+90h] [rbp-F8h]
  _OWORD v35[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-C8h]
  __int64 v37; // [rsp+D0h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+D8h] [rbp-B0h]
  __int128 v39; // [rsp+E8h] [rbp-A0h]
  __int128 v40; // [rsp+F8h] [rbp-90h]
  __int128 v41; // [rsp+108h] [rbp-80h]
  __int64 v42; // [rsp+118h] [rbp-70h]
  _OWORD v43[6]; // [rsp+120h] [rbp-68h] BYREF

  v4 = *a1;
  v5 = a1[9];
  *a1 = 0x8000000000000003LL;
  if ( v4 == 0x8000000000000003LL )
    return ruff_python_formatter::string::docstring::CodeExample::add_start(a1, a2, a3);
  v6 = (__int128 *)(a1 + 1);
  v7 = 1LL;
  if ( (v4 ^ 0x8000000000000000LL) < 3 )
    v7 = v4 ^ 0x8000000000000000LL;
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v37 = v4;
      v8 = *(_OWORD *)(a1 + 3);
      v9 = *(_OWORD *)(a1 + 5);
      v10 = *(_OWORD *)(a1 + 7);
      v38 = *v6;
      v39 = v8;
      v40 = v9;
      v41 = v10;
      v42 = v5;
      ruff_python_formatter::string::docstring::CodeExampleRst::add_code_line(&v30, &v37, a2, a3);
      if ( (_QWORD)v30 != 0x8000000000000000LL )
      {
        v29 = v34;
        v27 = v33;
        v24 = v32;
        v21 = v31;
        v18 = v30;
        result = core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a1);
        *((_OWORD *)a1 + 4) = v29;
        *((_OWORD *)a1 + 3) = v27;
        *((_OWORD *)a1 + 2) = v24;
        *((_OWORD *)a1 + 1) = v21;
        *(_OWORD *)a1 = v18;
        return result;
      }
      goto LABEL_9;
    }
    v13 = *v6;
    v14 = *(_OWORD *)(a1 + 3);
    v15 = *(_OWORD *)(a1 + 5);
    v43[3] = *(_OWORD *)(a1 + 7);
    v43[2] = v15;
    v43[1] = v14;
    v43[0] = v13;
    ruff_python_formatter::string::docstring::CodeExampleMarkdown::add_code_line(&v30, v43, a2, a3);
    if ( (_QWORD)v30 == 0x8000000000000000LL )
      return core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(
               0x8000000000000000LL,
               *((_QWORD *)&v30 + 1));
    v28 = v33;
    v26 = v32;
    v23 = v31;
    v20 = v30;
    result = core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a1);
    *a1 = 0x8000000000000002LL;
    v16 = v20;
    v17 = v23;
    *(_OWORD *)(a1 + 7) = v28;
    *(_OWORD *)(a1 + 5) = v26;
  }
  else
  {
    v36 = a1[5];
    v12 = *v6;
    v35[1] = *(_OWORD *)(a1 + 3);
    v35[0] = v12;
    ruff_python_formatter::string::docstring::CodeExampleDoctest::add_code_line(&v30, v35, a2, a3);
    if ( (_QWORD)v30 == 0x8000000000000000LL )
    {
LABEL_9:
      core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleRst>>(
        0x8000000000000000LL,
        *((_QWORD *)&v30 + 1));
      return ruff_python_formatter::string::docstring::CodeExample::add_start(a1, a2, a3);
    }
    v25 = v32;
    v22 = v31;
    v19 = v30;
    core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(a1);
    *a1 = 0x8000000000000000LL;
    result = v25;
    a1[5] = v25;
    v16 = v19;
    v17 = v22;
  }
  *(_OWORD *)(a1 + 3) = v17;
  *v6 = v16;
  return result;
}