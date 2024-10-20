__int64 __fastcall uu_od::inputoffset::InputOffset::print_final_offset(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[2]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v3[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v4[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v5; // [rsp+28h] [rbp-50h] BYREF
  __int64 v6; // [rsp+30h] [rbp-48h]
  __int64 v7; // [rsp+38h] [rbp-40h]
  _QWORD v8[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 24) != 3 || *(_QWORD *)a1 == 1LL )
  {
    uu_od::inputoffset::InputOffset::format_byte_offset((__int64)v3, (__int64 *)a1);
    v2[0] = v3;
    v2[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v8[0] = &unk_12C6F0;
    v8[1] = 2LL;
    v8[4] = 0LL;
    v8[2] = v2;
    v8[3] = 1LL;
    std::io::stdio::_print(v8);
    result = alloc::raw_vec::RawVec<T,A>::current_memory(&v5, v3);
    if ( v6 )
      return <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v4, v5, v6, v7);
  }
  return result;
}
