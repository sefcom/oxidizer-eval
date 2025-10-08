__int64 __fastcall sniffnet::networking::types::my_device::MyDevice::to_pcap_device(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // [rsp+8h] [rbp-120h] BYREF
  __int128 v12; // [rsp+18h] [rbp-110h]
  __int128 v13; // [rsp+28h] [rbp-100h]
  __int128 v14; // [rsp+38h] [rbp-F0h]
  __int128 v15; // [rsp+48h] [rbp-E0h]
  _OWORD v16[5]; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v17[128]; // [rsp+A8h] [rbp-80h] BYREF

  pcap::device::Device::list(&v11);
  core::result::Result<T,E>::unwrap_or_default(v16, &v11);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v17, v16);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11, v17);
  if ( __OFSUB__(0LL, (_QWORD)v11) )
  {
LABEL_4:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<pcap::device::Device>>(v17);
    pcap::device::Device::lookup(v17);
    *(_QWORD *)&v11 = 0x8000000000000000LL;
    result = core::result::Result<T,E>::unwrap_or(v16, v17, &v11);
    if ( *(_QWORD *)&v16[0] == 0x8000000000000000LL )
    {
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 1LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 48) = 0x8000000000000000LL;
      *(_QWORD *)(a1 + 32) = 1LL;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_DWORD *)(a1 + 72) = 0;
      *(_BYTE *)(a1 + 76) = 0;
    }
    else
    {
      *(_OWORD *)(a1 + 64) = v16[4];
      v5 = v16[0];
      v6 = v16[1];
      v7 = v16[2];
      *(_OWORD *)(a1 + 48) = v16[3];
      *(_OWORD *)(a1 + 32) = v7;
      *(_OWORD *)(a1 + 16) = v6;
      *(_OWORD *)a1 = v5;
    }
  }
  else
  {
    while ( !(unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                                *((_QWORD *)&v11 + 1),
                                v12,
                                a2,
                                a3) )
    {
      core::ptr::drop_in_place<pcap::device::Device>(&v11);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v11, v17);
      if ( (_QWORD)v11 == 0x8000000000000000LL )
        goto LABEL_4;
    }
    *(_OWORD *)(a1 + 64) = v15;
    v8 = v11;
    v9 = v12;
    v10 = v13;
    *(_OWORD *)(a1 + 48) = v14;
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
    return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<pcap::device::Device>>(v17);
  }
  return result;
}