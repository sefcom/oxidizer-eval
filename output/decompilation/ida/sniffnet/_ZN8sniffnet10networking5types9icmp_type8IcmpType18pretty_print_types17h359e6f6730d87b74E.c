__int64 __fastcall sniffnet::networking::types::icmp_type::IcmpType::pretty_print_types(__int64 a1)
{
  __int64 i; // rax
  __int64 v2; // rdx
  __int64 result; // rax
  _OWORD *v4; // rcx
  __int128 v5; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v6; // [rsp+10h] [rbp-D8h]
  __int64 v7; // [rsp+18h] [rbp-D0h]
  __int64 v8; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v10[8]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+38h] [rbp-B0h]
  __int64 v12; // [rsp+40h] [rbp-A8h]
  _QWORD v13[4]; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v14[6]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v15[80]; // [rsp+98h] [rbp-50h] BYREF

  *(_QWORD *)&v5 = 0LL;
  *((_QWORD *)&v5 + 1) = 1LL;
  v6 = 0LL;
  hashbrown::map::HashMap<K,V,S,A>::iter(v14);
  core::iter::traits::iterator::Iterator::collect(v10, v14);
  v7 = a1;
  alloc::slice::<impl [T]>::sort_by(v11, v12);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v15, v10);
  for ( i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v15);
        i;
        i = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v15) )
  {
    v8 = i;
    v9 = v2;
    v13[0] = &v8;
    v13[1] = <&T as core::fmt::Display>::fmt;
    v13[2] = &v9;
    v13[3] = <&T as core::fmt::Display>::fmt;
    v14[0] = &off_2DFF780;
    v14[1] = 3LL;
    v14[4] = 0LL;
    v14[2] = v13;
    v14[3] = 2LL;
    <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v5, v14);
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&sniffnet::networking::types::arp_type::ArpType,&usize)>>(v15);
  result = v6;
  v4 = (_OWORD *)v7;
  *(_QWORD *)(v7 + 16) = v6;
  *v4 = v5;
  return result;
}