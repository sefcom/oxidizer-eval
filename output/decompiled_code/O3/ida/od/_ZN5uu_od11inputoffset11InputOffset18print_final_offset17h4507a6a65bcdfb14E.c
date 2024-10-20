__int64 __fastcall uu_od::inputoffset::InputOffset::print_final_offset(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v3[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v4[7]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 24) != 3 || *(_QWORD *)a1 )
  {
    uu_od::inputoffset::InputOffset::format_byte_offset(v2, (__int64 *)a1);
    v3[0] = v2;
    v3[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v4[0] = &unk_103628;
    v4[1] = 2LL;
    v4[4] = 0LL;
    v4[2] = v3;
    v4[3] = 1LL;
    result = std::io::stdio::_print(v4);
    if ( v2[0] )
      return _rust_dealloc(v2[1], v2[0], 1LL);
  }
  return result;
}
