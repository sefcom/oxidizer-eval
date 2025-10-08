__int64 __fastcall sniffnet::networking::types::capture_context::CaptureSource::set_addresses(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r15
  __int64 v3; // r12
  _QWORD v4[3]; // [rsp+8h] [rbp-130h] BYREF
  __int128 v5; // [rsp+20h] [rbp-118h] BYREF
  __int128 v6; // [rsp+30h] [rbp-108h]
  __int128 v7; // [rsp+40h] [rbp-F8h]
  __int128 v8; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v9; // [rsp+60h] [rbp-D8h]
  __int128 v10; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v11; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v12; // [rsp+98h] [rbp-A0h]
  __int128 v13; // [rsp+A8h] [rbp-90h]
  __int128 v14; // [rsp+B8h] [rbp-80h]
  _QWORD v15[2]; // [rsp+C8h] [rbp-70h] BYREF
  int v16; // [rsp+D8h] [rbp-60h]
  _BYTE v17[80]; // [rsp+E8h] [rbp-50h] BYREF

  result = 0LL;
  if ( !__OFSUB__(0LL, *(_QWORD *)a1) )
  {
    v4[0] = 0LL;
    v4[1] = 1LL;
    v4[2] = 0LL;
    pcap::device::Device::list(&v5);
    v15[0] = &unk_18388C4;
    v15[1] = 39LL;
    v16 = 192;
    <core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err(&v10, &v5, v15);
    core::result::Result<T,E>::unwrap_or_default(&v5, &v10);
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v17, &v5);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10, v17);
    if ( (_QWORD)v10 != 0x8000000000000000LL )
    {
      if ( (*(_DWORD *)(a1 + 72) & 0xFFFFFFFE) == 6 )
      {
        do
        {
          v9 = v14;
          v8 = v13;
          v7 = v12;
          v6 = v11;
          v5 = v10;
          <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v15, (char *)&v11 + 8);
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
            v4,
            v15);
          core::ptr::drop_in_place<alloc::string::String>(&v10);
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v8);
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10, v17);
        }
        while ( (_QWORD)v10 != 0x8000000000000000LL );
      }
      else
      {
        v2 = *(_QWORD *)(a1 + 8);
        v3 = *(_QWORD *)(a1 + 16);
        while ( 1 )
        {
          v5 = v10;
          v6 = v11;
          v9 = v14;
          v8 = v13;
          v7 = v12;
          if ( (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                                  *((_QWORD *)&v10 + 1),
                                  v11,
                                  v2,
                                  v3) )
            break;
          core::ptr::drop_in_place<alloc::string::String>(&v10);
          core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v8);
          core::ptr::drop_in_place<alloc::vec::Vec<pcap::device::Address>>(*((_QWORD *)&v6 + 1), v7);
          <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v10, v17);
          if ( (_QWORD)v10 == 0x8000000000000000LL )
            goto LABEL_11;
        }
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v15, (char *)&v11 + 8);
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
          v4,
          v15);
        core::ptr::drop_in_place<alloc::string::String>(&v10);
        core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v8);
      }
    }
LABEL_11:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<pcap::device::Device>>(v17);
    return sniffnet::networking::types::my_device::MyDevice::set_addresses(a1, v4);
  }
  return result;
}