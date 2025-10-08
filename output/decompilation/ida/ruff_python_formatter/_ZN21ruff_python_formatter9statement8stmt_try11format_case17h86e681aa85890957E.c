__int64 __fastcall ruff_python_formatter::statement::stmt_try::format_case(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rbp
  __int64 v23; // r11
  char *v24; // rcx
  __int64 v25; // r14
  char **v26; // r12
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // r15
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 result; // rax
  __int64 v36; // [rsp+8h] [rbp-150h]
  char **v37; // [rsp+10h] [rbp-148h] BYREF
  __int64 v38; // [rsp+18h] [rbp-140h]
  __int64 v39; // [rsp+20h] [rbp-138h]
  __int128 v40; // [rsp+28h] [rbp-130h]
  __int64 v41; // [rsp+38h] [rbp-120h]
  _QWORD *v42; // [rsp+40h] [rbp-118h]
  void *v43; // [rsp+48h] [rbp-110h]
  __int64 v44; // [rsp+50h] [rbp-108h]
  __int64 v45; // [rsp+58h] [rbp-100h]
  __int64 v46; // [rsp+60h] [rbp-F8h]
  __int64 v47; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v48; // [rsp+70h] [rbp-E8h]
  __int64 v49; // [rsp+78h] [rbp-E0h]
  _QWORD v50[2]; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v51; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-B8h]
  _QWORD v53[4]; // [rsp+A8h] [rbp-B0h] BYREF
  _QWORD v54[3]; // [rsp+C8h] [rbp-90h] BYREF
  char v55; // [rsp+E0h] [rbp-78h]
  __int64 v56; // [rsp+E8h] [rbp-70h] BYREF
  unsigned __int64 v57; // [rsp+F0h] [rbp-68h]
  __int64 v58; // [rsp+F8h] [rbp-60h]
  unsigned __int64 v59; // [rsp+100h] [rbp-58h]
  __int64 v60; // [rsp+108h] [rbp-50h] BYREF
  __int64 v61; // [rsp+110h] [rbp-48h]
  __int64 v62; // [rsp+118h] [rbp-40h]
  __int64 v63; // [rsp+120h] [rbp-38h]

  v8 = a6;
  v9 = a5;
  v10 = a2;
  v11 = a1;
  v12 = a3;
  v13 = a2;
  if ( !a3 )
  {
LABEL_4:
    v14 = *(_QWORD *)(v13 + 16);
    if ( v14 )
      goto LABEL_5;
LABEL_10:
    v33 = a4;
    goto LABEL_13;
  }
  if ( a3 == 1 )
  {
    v13 = a2 + 48;
    goto LABEL_4;
  }
  v13 = a2 + 72;
  v14 = *(_QWORD *)(a2 + 88);
  if ( !v14 )
    goto LABEL_10;
LABEL_5:
  v49 = *(_QWORD *)(v13 + 8) + (v14 << 7) - 128;
  v15 = core::slice::<impl [T]>::partition_point(a5, a6);
  if ( v15 > v8 )
  {
    v37 = &off_57ADF0;
    v38 = 1LL;
    v39 = 8LL;
    v40 = 0LL;
    core::panicking::panic_fmt(&v37, &off_57EF78);
  }
  core::slice::<impl [T]>::split_at_unchecked(&v56, v9, v8, v15);
  v16 = v56;
  v17 = v57;
  v47 = v58;
  v48 = v59;
  v18 = core::slice::<impl [T]>::partition_point(v56, v57);
  if ( v18 > v17 )
  {
    v37 = &off_57ADF0;
    v38 = 1LL;
    v39 = 8LL;
    v40 = 0LL;
    core::panicking::panic_fmt(&v37, &off_57EF90);
  }
  v46 = a1;
  core::slice::<impl [T]>::split_at_unchecked(&v60, v16, v17, v18);
  v20 = v60;
  v21 = v61;
  v22 = v62;
  v23 = v63;
  v24 = (char *)dword_8D610 + dword_8D610[v12];
  v25 = (unsigned int)(8 * v12);
  v26 = *(char ***)((char *)&unk_8D620 + v25);
  v27 = *(_QWORD *)((char *)&unk_8D638 + v25);
  v50[0] = v24;
  v50[1] = v27;
  v28 = a4;
  if ( a4 )
  {
    v29 = v10;
    v30 = v61;
    v36 = v13;
    v31 = v63;
    v32 = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(v28);
    v23 = v31;
    v13 = v36;
    v21 = v30;
    v10 = v29;
  }
  else
  {
    v32 = 94LL;
  }
  v37 = v26;
  v38 = v10;
  v39 = v20;
  *(_QWORD *)&v40 = v21;
  *((_QWORD *)&v40 + 1) = v32;
  v41 = v19;
  v42 = v50;
  v43 = &unk_57C890;
  v44 = v22;
  v45 = v23;
  v54[0] = v13;
  v55 = a7;
  v54[1] = v22;
  v54[2] = v23;
  v53[0] = &v37;
  v53[1] = &unk_57E140;
  v53[2] = v54;
  v53[3] = &unk_57E160;
  <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v51, a8, v53, 2LL);
  v11 = v46;
  v8 = v48;
  v9 = v47;
  v33 = v49;
  if ( (_DWORD)v51 != 4 )
  {
    *(_QWORD *)(v46 + 24) = v52;
    *(_OWORD *)(v11 + 8) = v51;
    result = 1LL;
    goto LABEL_15;
  }
LABEL_13:
  *(_QWORD *)(v11 + 8) = v33;
  *(_QWORD *)(v11 + 16) = v9;
  *(_QWORD *)(v11 + 24) = v8;
  result = 0LL;
LABEL_15:
  *(_QWORD *)v11 = result;
  return result;
}