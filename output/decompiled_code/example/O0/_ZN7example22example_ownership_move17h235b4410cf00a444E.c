__int64 __fastcall example::example_ownership_move()
{
  __int64 result; // rax
  _OWORD v1[2]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v2[3]; // [rsp+20h] [rbp-38h] BYREF

  example::Person::new(v1);
  if ( *(_QWORD *)&v1[0] == 0x8000000000000000LL )
    example::example_ownership_move::panic_cold_explicit(&off_5B058);
  v2[1] = v1[1];
  v2[0] = v1[0];
  example::Person::print((__int64)v2);
  core::ptr::drop_in_place<example::Person>(v2);
  result = *(_QWORD *)&v1[0] == 0x8000000000000000LL;
  if ( *(_QWORD *)&v1[0] == 0x8000000000000000LL )
    return core::ptr::drop_in_place<core::result::Result<example::Person,std::io::error::Error>>(v1);
  return result;
}
