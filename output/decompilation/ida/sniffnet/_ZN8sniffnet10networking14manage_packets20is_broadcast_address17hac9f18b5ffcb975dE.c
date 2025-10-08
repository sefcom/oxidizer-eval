char __fastcall sniffnet::networking::manage_packets::is_broadcast_address(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  char v6; // bl
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h]
  __int64 v9; // [rsp+18h] [rbp-20h]

  *(_DWORD *)((char *)&v7 + 1) = -1;
  LOBYTE(v7) = 0;
  if ( (unsigned __int8)<core::net::ip_addr::IpAddr as core::cmp::PartialEq>::eq(a1, &v7) )
    return 1;
  core::iter::traits::iterator::Iterator::collect(&v7, a2, a2 + 68 * a3);
  v5 = v8;
  v6 = <T as core::slice::cmp::SliceContains>::slice_contains(a1, v8, v9);
  core::ptr::drop_in_place<alloc::vec::Vec<core::net::ip_addr::IpAddr>>(v7, v5);
  return v6;
}