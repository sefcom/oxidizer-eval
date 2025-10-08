char uvx::main()
{
  int v0; // eax
  __int64 v2; // [rsp+8h] [rbp-60h] BYREF
  int v3; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v4; // [rsp+14h] [rbp-54h]
  __int64 v5; // [rsp+18h] [rbp-50h]
  _QWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v7[7]; // [rsp+30h] [rbp-38h] BYREF

  uvx::run((__int64)&v3);
  if ( v3 == 1 )
  {
    v2 = v5;
    v6[0] = &v2;
    v6[1] = <std::io::error::Error as core::fmt::Display>::fmt;
    v7[0] = &off_630A0;
    v7[1] = 2LL;
    v7[4] = 0LL;
    v7[2] = v6;
    v7[3] = 1LL;
    std::io::stdio::_eprint(v7);
    core::ptr::drop_in_place<std::io::error::Error>(v2);
    LOBYTE(v0) = 2;
  }
  else
  {
    LOBYTE(v0) = 2;
    if ( (v4 & 0x7F) == 0 )
      return BYTE1(v4);
  }
  return v0;
}