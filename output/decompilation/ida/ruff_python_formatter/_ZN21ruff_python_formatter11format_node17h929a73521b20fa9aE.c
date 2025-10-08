__int64 __fastcall ruff_python_formatter::format_node(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 result; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v16; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v17; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-C8h]
  __int64 v19; // [rsp+28h] [rbp-C0h]
  __int16 v20; // [rsp+30h] [rbp-B8h]
  __int16 v21; // [rsp+38h] [rbp-B0h]
  char v22; // [rsp+3Ah] [rbp-AEh]
  __int128 v23; // [rsp+3Ch] [rbp-ACh]
  char v24; // [rsp+4Ch] [rbp-9Ch]
  _QWORD v25[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v26; // [rsp+60h] [rbp-88h] BYREF
  __int128 v27; // [rsp+68h] [rbp-80h]
  __int64 v28; // [rsp+78h] [rbp-70h]
  __int128 v29; // [rsp+80h] [rbp-68h]
  __int128 v30; // [rsp+90h] [rbp-58h]
  __int128 v31; // [rsp+A0h] [rbp-48h]
  __int64 v32; // [rsp+B0h] [rbp-38h]

  v9 = <T as core::convert::Into<U>>::into(a2 + 72);
  v11 = ruff_python_formatter::comments::Comments::from_ast::collect_comments(v9, v10, a4, a5, a3);
  v23 = *a6;
  *(_QWORD *)&v17 = a4;
  *((_QWORD *)&v17 + 1) = a5;
  v18 = v11;
  v19 = a2;
  v20 = 256;
  v21 = 0;
  v24 = 2;
  v22 = 2;
  v16 = a2 + 72;
  v25[0] = &v16;
  v25[1] = &unk_57F528;
  ruff_formatter::format(&v26, &v17, v25);
  result = v26;
  v17 = v27;
  v18 = v28;
  if ( !__OFSUB__(-v26, 1LL) )
  {
    *(_QWORD *)(a1 + 80) = v32;
    v13 = v29;
    v14 = v30;
    *(_OWORD *)(a1 + 64) = v31;
    *(_OWORD *)(a1 + 48) = v14;
    *(_OWORD *)(a1 + 32) = v13;
  }
  *(_QWORD *)(a1 + 24) = v18;
  *(_OWORD *)(a1 + 8) = v17;
  *(_QWORD *)a1 = result;
  return result;
}