char __fastcall sniffnet::networking::types::ip_collection::IpCollection::contains(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r12

  v2 = a1[5];
  if ( !v2 )
    return <T as core::slice::cmp::SliceContains>::slice_contains(a2, a1[1], a1[2]);
  v3 = a1[4];
  v4 = 35 * v2;
  while ( !(unsigned __int8)core::ops::range::RangeBounds::contains(v3, a2) )
  {
    v3 += 35LL;
    v4 -= 35LL;
    if ( !v4 )
      return <T as core::slice::cmp::SliceContains>::slice_contains(a2, a1[1], a1[2]);
  }
  return 1;
}