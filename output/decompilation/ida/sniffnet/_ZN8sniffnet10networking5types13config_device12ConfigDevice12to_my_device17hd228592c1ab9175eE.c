__int64 __fastcall sniffnet::networking::types::config_device::ConfigDevice::to_my_device(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // [rsp+0h] [rbp-138h] BYREF
  __int64 v10; // [rsp+10h] [rbp-128h]
  __int128 v11; // [rsp+18h] [rbp-120h]
  __int64 v12; // [rsp+28h] [rbp-110h]
  __int128 v13; // [rsp+30h] [rbp-108h]
  __int64 v14; // [rsp+40h] [rbp-F8h]
  __int128 v15; // [rsp+50h] [rbp-E8h]
  _QWORD v16[2]; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+78h] [rbp-C0h]
  __int64 v18; // [rsp+88h] [rbp-B0h]
  __int128 v19; // [rsp+90h] [rbp-A8h]
  __int128 v20; // [rsp+A0h] [rbp-98h]
  _BYTE v21[128]; // [rsp+B8h] [rbp-80h] BYREF

  pcap::device::Device::list(&v9);
  core::result::Result<T,E>::unwrap_or_default(v16, &v9);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v21, v16);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9, v21);
  if ( __OFSUB__(0LL, (_QWORD)v9) )
  {
LABEL_4:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<pcap::device::Device>>(v21);
    pcap::device::Device::lookup(v21);
    *(_QWORD *)&v9 = 0x8000000000000000LL;
    core::result::Result<T,E>::unwrap_or(v16, v21, &v9);
    result = v16[0];
    if ( v16[0] == 0x8000000000000000LL )
    {
      v5 = xmmword_2713A0;
      v6 = 0LL;
      v7 = 1LL;
      result = 0LL;
      v8 = 1LL;
    }
    else
    {
      v7 = v16[1];
      v15 = v20;
      v6 = v17;
      v8 = v18;
      v5 = v19;
    }
    *(_QWORD *)a1 = result;
    *(_QWORD *)(a1 + 8) = v7;
    *(_OWORD *)(a1 + 56) = v15;
    *(_OWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 40) = v5;
    *(_DWORD *)(a1 + 72) = 9;
  }
  else
  {
    while ( !(unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                                *((_QWORD *)&v9 + 1),
                                v10,
                                a2,
                                a3) )
    {
      core::ptr::drop_in_place<pcap::device::Device>(&v9);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v9, v21);
      if ( (_QWORD)v9 == 0x8000000000000000LL )
        goto LABEL_4;
    }
    *(_QWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
    *(_OWORD *)(a1 + 48) = v13;
    *(_QWORD *)(a1 + 64) = v14;
    *(_QWORD *)(a1 + 40) = v12;
    *(_OWORD *)(a1 + 24) = v11;
    *(_DWORD *)(a1 + 72) = 9;
    return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<pcap::device::Device>>(v21);
  }
  return result;
}