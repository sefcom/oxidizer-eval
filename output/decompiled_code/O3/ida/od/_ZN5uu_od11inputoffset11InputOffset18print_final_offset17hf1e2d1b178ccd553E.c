__int64 __fastcall uu_od::inputoffset::InputOffset::print_final_offset(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v3[6]; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v4[4]; // [rsp+48h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 24) != 3 || *(_QWORD *)a1 )
  {
    uu_od::inputoffset::InputOffset::format_byte_offset(v4, (__int64 *)a1);
    v2[0] = v4;
    v2[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v3[0] = &unk_141A80;
    v3[1] = 2LL;
    v3[4] = 0LL;
    v3[2] = v2;
    v3[3] = 1LL;
    std::io::stdio::_print(v3);
    return core::ptr::drop_in_place<alloc::string::String>(v4);
  }
  return result;
}
