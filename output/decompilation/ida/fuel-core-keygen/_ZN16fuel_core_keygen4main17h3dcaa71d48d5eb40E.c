__int64 fuel_core_keygen::main()
{
  __int64 v0; // rbx
  __int64 v2; // [rsp+8h] [rbp-70h] BYREF
  __int128 v3; // [rsp+10h] [rbp-68h]
  __int64 v4; // [rsp+20h] [rbp-58h]
  unsigned __int8 v5; // [rsp+28h] [rbp-50h]
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  __int128 v7; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  _BYTE v9[40]; // [rsp+50h] [rbp-28h] BYREF

  clap_builder::derive::Parser::parse(v9);
  fuel_core_keygen::Command::exec((__int64)&v2, (__int64)v9);
  v0 = v2;
  if ( v5 != 2 )
  {
    v8 = v4;
    v7 = v3;
    v6 = v2;
    v0 = fuel_core_keygen::print_value(&v6, v5);
  }
  core::ptr::drop_in_place<fuel_core_keygen::Command>(v9);
  return v0;
}