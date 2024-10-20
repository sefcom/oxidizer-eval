__int64 __fastcall uu_shred::get_size::{{closure}}(__int128 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int128 v4; // [rsp+0h] [rbp-D8h]
  __int64 v5; // [rsp+10h] [rbp-C8h]
  _QWORD v6[2]; // [rsp+20h] [rbp-B8h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v9[3]; // [rsp+50h] [rbp-88h] BYREF
  char v10; // [rsp+68h] [rbp-70h]
  _QWORD v11[6]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v12[7]; // [rsp+A0h] [rbp-38h] BYREF

  if ( *(_QWORD *)a1 != 0x8000000000000000LL )
  {
    v5 = *((_QWORD *)a1 + 2);
    v4 = *a1;
    v7[0] = uucore::util_name(a1);
    v7[1] = v2;
    v6[0] = v7;
    v6[1] = <&T as core::fmt::Display>::fmt;
    v11[0] = &anon_9d81be959acf34f7d56c82ffda2144ee_93_llvm_1559976801502891496;
    v11[1] = 2LL;
    v11[4] = 0LL;
    v11[2] = v6;
    v11[3] = 1LL;
    std::io::stdio::_eprint(v11);
    if ( *((_QWORD *)&v4 + 1) && v5 >= 0 )
    {
      v9[0] = 0LL;
      v9[1] = *((_QWORD *)&v4 + 1);
      v9[2] = v5;
      v10 = 1;
      v8[0] = v9;
      v8[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      v12[0] = &anon_9d81be959acf34f7d56c82ffda2144ee_96_llvm_1559976801502891496;
      v12[1] = 2LL;
      v12[4] = 0LL;
      v12[2] = v8;
      v12[3] = 1LL;
      std::io::stdio::_eprint(v12);
      std::process::exit(1);
    }
    core::panicking::panic_nounwind(anon_1156bcafcecadbcb9b54fc5fb398738e_32_llvm_17080358467769226562, 162LL, v3);
  }
  return 0LL;
}
