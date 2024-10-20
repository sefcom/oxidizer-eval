__int64 *__fastcall uu_uniq::opt_parsed(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  __int64 v12; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+8h] [rbp-E0h]
  __int64 *v14; // [rsp+10h] [rbp-D8h] BYREF
  __int64 (__fastcall *v15)(); // [rsp+18h] [rbp-D0h]
  __int128 *v16; // [rsp+20h] [rbp-C8h]
  __int64 (__fastcall *v17)(); // [rsp+28h] [rbp-C0h]
  __int128 v18; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-A8h]
  __int64 v20; // [rsp+50h] [rbp-98h]
  __int128 v21; // [rsp+60h] [rbp-88h] BYREF
  __int128 v22; // [rsp+70h] [rbp-78h]
  __int64 v23; // [rsp+80h] [rbp-68h]
  char **v24; // [rsp+88h] [rbp-60h] BYREF
  __int64 v25; // [rsp+90h] [rbp-58h]
  __int64 **v26; // [rsp+98h] [rbp-50h]
  __int64 v27; // [rsp+A0h] [rbp-48h]
  __int64 v28; // [rsp+A8h] [rbp-40h]
  _QWORD v29[6]; // [rsp+B8h] [rbp-30h] BYREF

  v29[0] = a2;
  v29[1] = a3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v21, a4, a2, a3);
  v12 = a2;
  v13 = a3;
  if ( (_DWORD)v21 != 2 )
  {
    v20 = v23;
    v19 = v22;
    v18 = v21;
    v14 = &v12;
    v15 = <&T as core::fmt::Display>::fmt;
    v16 = &v18;
    v17 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v24 = &anon_91813ef2801f4d1d4cad4af8ef82e3d6_4_llvm_14928124353916811356;
    v25 = 2LL;
    v28 = 0LL;
    v26 = &v14;
    v27 = 2LL;
    core::panicking::panic_fmt(&v24, &anon_91813ef2801f4d1d4cad4af8ef82e3d6_6_llvm_14928124353916811356);
  }
  if ( *((_QWORD *)&v21 + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL);
    v6 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 16LL);
    core::num::<impl core::str::traits::FromStr for usize>::from_str(&v12, v5, v6);
    if ( (_BYTE)v12 )
    {
      if ( BYTE1(v12) != 2 )
      {
        *(_QWORD *)&v21 = 0LL;
        *((_QWORD *)&v21 + 1) = v5;
        *(_QWORD *)&v22 = v6;
        BYTE8(v22) = 0;
        v14 = v29;
        v15 = <&T as core::fmt::Display>::fmt;
        v16 = &v21;
        v17 = <os_display::Quoted as core::fmt::Display>::fmt;
        v24 = &off_F2C28;
        v25 = 2LL;
        v28 = 0LL;
        v26 = &v14;
        v27 = 2LL;
        alloc::fmt::format::format_inner(&v18, &v24);
        DWORD2(v19) = 1;
        v9 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v9 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v10 = v18;
        v9[1] = v19;
        *v9 = v10;
        a1[1] = (__int64)v9;
        a1[2] = (__int64)&off_F2C80;
        v8 = 1LL;
        goto LABEL_11;
      }
      a1[1] = 1LL;
      a1[2] = -1LL;
    }
    else
    {
      v7 = v13;
      a1[1] = 1LL;
      a1[2] = v7;
    }
    v8 = 0LL;
LABEL_11:
    *a1 = v8;
    return a1;
  }
  *(_OWORD *)a1 = 0LL;
  return a1;
}
