__int64 __fastcall uu_join::Spec::parse(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v4; // edx
  char v5; // bp
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // edx
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-150h] BYREF
  unsigned __int64 v17; // [rsp+10h] [rbp-148h]
  char **v18; // [rsp+18h] [rbp-140h] BYREF
  __int64 v19; // [rsp+20h] [rbp-138h]
  _QWORD *v20; // [rsp+28h] [rbp-130h]
  __int64 v21; // [rsp+30h] [rbp-128h]
  __int64 v22; // [rsp+38h] [rbp-120h]
  __int64 v23; // [rsp+48h] [rbp-110h] BYREF
  __int64 v24; // [rsp+50h] [rbp-108h]
  _QWORD v25[2]; // [rsp+58h] [rbp-100h] BYREF
  _QWORD v26[2]; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD v27[2]; // [rsp+78h] [rbp-E0h] BYREF
  _QWORD v28[3]; // [rsp+88h] [rbp-D0h] BYREF
  _QWORD v29[3]; // [rsp+A0h] [rbp-B8h] BYREF
  _QWORD v30[3]; // [rsp+B8h] [rbp-A0h] BYREF
  _QWORD v31[3]; // [rsp+D0h] [rbp-88h] BYREF
  char v32; // [rsp+E8h] [rbp-70h]
  _QWORD v33[3]; // [rsp+F0h] [rbp-68h] BYREF
  char v34; // [rsp+108h] [rbp-50h]
  _QWORD v35[3]; // [rsp+110h] [rbp-48h] BYREF
  char v36; // [rsp+128h] [rbp-30h]

  v16 = a2;
  v17 = a2 + a3;
  if ( !(unsigned int)core::str::validations::next_code_point(&v16) )
    goto LABEL_7;
  if ( (v4 ^ 0xD800u) - 2048 >= 0x10F800 )
    goto LABEL_30;
  if ( v4 == 48 )
  {
    if ( (unsigned int)core::str::validations::next_code_point(&v16) )
    {
      if ( (v14 ^ 0xD800u) - 2048 >= 0x10F800 )
        goto LABEL_30;
      if ( v14 != 1114112 )
      {
        v31[0] = 0LL;
        v31[1] = a2;
        v31[2] = a3;
        v32 = 1;
        v25[0] = v31;
        v25[1] = <os_display::Quoted as core::fmt::Display>::fmt;
        v18 = &off_131140;
        v19 = 1LL;
        v20 = v25;
        v21 = 1LL;
        v22 = 0LL;
        alloc::fmt::format::format_inner(v28, &v18);
        v6 = v28[0];
        v7 = v28[1];
        v8 = v28[2];
        v9 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v9 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_19;
      }
    }
    *(_BYTE *)(a1 + 8) = 0;
LABEL_29:
    v12 = 0LL;
    goto LABEL_21;
  }
  if ( v4 != 49 )
  {
    if ( v4 == 50 )
    {
      v5 = 1;
      goto LABEL_10;
    }
LABEL_7:
    v33[0] = 0LL;
    v33[1] = a2;
    v33[2] = a3;
    v34 = 1;
    v26[0] = v33;
    v26[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v18 = &off_131150;
    v19 = 1LL;
    v20 = v26;
    v21 = 1LL;
    v22 = 0LL;
    alloc::fmt::format::format_inner(v29, &v18);
    v6 = v29[0];
    v7 = v29[1];
    v8 = v29[2];
    v9 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v9 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    goto LABEL_19;
  }
  v5 = 0;
LABEL_10:
  if ( !(unsigned int)core::str::validations::next_code_point(&v16) )
    goto LABEL_18;
  if ( (v10 ^ 0xD800u) - 2048 >= 0x10F800 )
LABEL_30:
    core::panicking::panic_nounwind(anon_88bd953382d64e16d63aef396fcf2aa0_47_llvm_18377431372254846744, 57LL);
  if ( v10 != 46 )
  {
LABEL_18:
    v35[0] = 0LL;
    v35[1] = a2;
    v35[2] = a3;
    v36 = 1;
    v27[0] = v35;
    v27[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v18 = &off_131140;
    v19 = 1LL;
    v20 = v27;
    v21 = 1LL;
    v22 = 0LL;
    alloc::fmt::format::format_inner(v30, &v18);
    v6 = v30[0];
    v7 = v30[1];
    v8 = v30[2];
    v9 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v9 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_19:
    *(_QWORD *)v9 = v6;
    *(_QWORD *)(v9 + 8) = v7;
    *(_QWORD *)(v9 + 16) = v8;
    *(_DWORD *)(v9 + 24) = 1;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
    goto LABEL_20;
  }
  if ( v17 < v16 )
    core::panicking::panic_nounwind(anon_1c72441fd4e1a36e4a3b17a9b86ac5d9_17_llvm_11826613902763942123, 71LL);
  if ( !v16 || (__int64)(v17 - v16) < 0 )
    core::panicking::panic_nounwind(anon_88bd953382d64e16d63aef396fcf2aa0_53_llvm_18377431372254846744, 162LL);
  uu_join::parse_field_number(&v23);
  if ( !v23 )
  {
    v15 = v24;
    *(_BYTE *)(a1 + 8) = 1;
    *(_BYTE *)(a1 + 9) = v5;
    *(_QWORD *)(a1 + 16) = v15;
    goto LABEL_29;
  }
  v11 = v24;
  *(_QWORD *)(a1 + 8) = v23;
  *(_QWORD *)(a1 + 16) = v11;
LABEL_20:
  v12 = 1LL;
LABEL_21:
  *(_QWORD *)a1 = v12;
  return a1;
}
