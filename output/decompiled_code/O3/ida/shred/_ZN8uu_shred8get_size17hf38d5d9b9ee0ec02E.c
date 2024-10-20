__int64 __fastcall uu_shred::get_size(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v3)(); // r14
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(); // rdx
  char **v8; // [rsp+8h] [rbp-F0h] BYREF
  __int64 v9; // [rsp+10h] [rbp-E8h]
  __int64 **v10; // [rsp+18h] [rbp-E0h]
  __int64 v11; // [rsp+20h] [rbp-D8h]
  __int64 v12; // [rsp+28h] [rbp-D0h]
  __int64 *v13; // [rsp+38h] [rbp-C0h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+40h] [rbp-B8h]
  __int64 v15; // [rsp+48h] [rbp-B0h]
  char v16; // [rsp+50h] [rbp-A8h]
  __int64 v17; // [rsp+58h] [rbp-A0h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+60h] [rbp-98h]
  __int64 v19; // [rsp+68h] [rbp-90h]
  char v20; // [rsp+70h] [rbp-88h]
  __int16 v21; // [rsp+78h] [rbp-80h]
  char v22; // [rsp+7Ah] [rbp-7Eh]
  int v23; // [rsp+80h] [rbp-78h] BYREF
  __int64 v24; // [rsp+88h] [rbp-70h]
  __int64 v25; // [rsp+90h] [rbp-68h]
  __int64 v26; // [rsp+98h] [rbp-60h]
  _QWORD v27[3]; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v28[8]; // [rsp+B8h] [rbp-40h] BYREF

  v1 = *a1;
  if ( *a1 == 0x8000000000000000LL )
    return 0LL;
  v3 = (__int64 (__fastcall *)())a1[1];
  v4 = a1[2];
  v21 = 0;
  v22 = 0;
  v17 = 0LL;
  v19 = 0LL;
  uucore::parser::parse_size::Parser::parse(&v23, &v17, v3, v4);
  if ( v23 != 3 )
  {
    v5 = v24;
    v6 = v25;
    goto LABEL_11;
  }
  if ( v26 )
  {
    v13 = 0LL;
    v14 = v3;
    v15 = v4;
    v16 = 1;
    v27[0] = &v13;
    v27[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = (char **)&anon_edec59db3b863b6761f2fcbb7c5018ad_77_llvm_1026247603497507326;
    v9 = 2LL;
    v12 = 0LL;
    v10 = (__int64 **)v27;
    v11 = 1LL;
    alloc::fmt::format::format_inner(v28, &v8);
    v5 = v28[0];
    v6 = v28[1];
LABEL_11:
    if ( v5 )
      _rust_dealloc(v6, v5, 1LL);
    v17 = uucore::util_name(v6);
    v18 = v7;
    v13 = &v17;
    v14 = <&T as core::fmt::Display>::fmt;
    v8 = (char **)&unk_EF7B0;
    v9 = 2LL;
    v12 = 0LL;
    v10 = &v13;
    v11 = 1LL;
    std::io::stdio::_eprint(&v8);
    v17 = 0LL;
    v18 = v3;
    v19 = v4;
    v20 = 1;
    v13 = &v17;
    v14 = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = &off_EF7D0;
    v9 = 2LL;
    v12 = 0LL;
    v10 = &v13;
    v11 = 1LL;
    std::io::stdio::_eprint(&v8);
    std::process::exit(1);
  }
  if ( v1 )
    _rust_dealloc(v3, v1, 1LL);
  return 1LL;
}
