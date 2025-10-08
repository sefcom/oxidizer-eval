__int64 __fastcall sniffnet::gui::sniffer::Sniffer::add_or_remove_favorite(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  __int64 result; // rax
  _BYTE v5[112]; // [rsp+8h] [rbp-70h] BYREF

  v3 = a3;
  if ( a3 )
  {
    <sniffnet::networking::types::host::Host as core::clone::Clone>::clone(v5, a2);
    hashbrown::map::HashMap<K,V,S,A>::insert(a1 + 1104, v5);
  }
  else
  {
    hashbrown::map::HashMap<K,V,S,A>::remove(a1 + 1104, a2);
  }
  result = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1 + 912, a2);
  if ( result )
    *(_BYTE *)(result + 177) = v3;
  return result;
}