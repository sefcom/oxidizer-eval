__int64 __fastcall sniffnet::networking::types::bogon::is_bogon(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r13

  std::sync::poison::once::Once::call_once();
  if ( !qword_2F3C480 )
    return 0LL;
  v1 = qword_2F3C478;
  v2 = 8 * qword_2F3C480;
  v3 = 0LL;
  v4 = 0LL;
  while ( !(unsigned __int8)sniffnet::networking::types::ip_collection::IpCollection::contains(*(_QWORD *)(v1 + v4), a1) )
  {
    v4 += 8LL;
    if ( v2 == v4 )
      return v3;
  }
  return *(_QWORD *)(*(_QWORD *)(v1 + v4) + 48LL);
}