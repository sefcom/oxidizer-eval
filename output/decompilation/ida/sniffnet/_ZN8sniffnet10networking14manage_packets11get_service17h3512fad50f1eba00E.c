_QWORD *__fastcall sniffnet::networking::manage_packets::get_service(
        _QWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5)
{
  _QWORD *result; // rax
  __int64 v7; // rdi
  unsigned int v8; // r15d
  unsigned int v9; // r14d
  __int64 entry; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rdx
  _QWORD *v15; // r14
  char is_broadcast_address; // r13
  __int128 v20; // [rsp+20h] [rbp-68h] BYREF
  char v21; // [rsp+30h] [rbp-58h]
  _QWORD v22[9]; // [rsp+40h] [rbp-48h] BYREF

  result = (_QWORD *)*(unsigned __int8 *)(a2 + 42);
  if ( (unsigned __int8)result >= 2u )
  {
    *a1 = 2LL;
  }
  else if ( (*(_BYTE *)a2 & 1) != 0 && (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    v7 = *(unsigned __int16 *)(a2 + 2);
    v8 = *(unsigned __int16 *)(a2 + 6);
    v22[0] = 1LL;
    v9 = (unsigned __int8)result;
    entry = phf::map::Map<K,V>::get_entry(v7, (unsigned __int8)result);
    v12 = v11;
    if ( !entry )
      v12 = v22;
    v13 = phf::map::Map<K,V>::get_entry(v8, v9);
    v15 = v14;
    if ( !v13 )
      v15 = v22;
    v21 = *(_BYTE *)(a2 + 41);
    v20 = *(_OWORD *)(a2 + 25);
    is_broadcast_address = 1;
    if ( !a3 && !(unsigned __int8)core::net::ip_addr::IpAddr::is_multicast(&v20) )
      is_broadcast_address = sniffnet::networking::manage_packets::is_broadcast_address(&v20, a4, a5);
    result = v15;
    if ( (unsigned __int8)((is_broadcast_address | (2 * ((unsigned __int16)v8 < 0x400u))) + 1) < (unsigned __int8)(((2 * ((unsigned __int16)v7 < 0x400u)) | ((is_broadcast_address & 1) == 0)) + 1) )
      result = v12;
    if ( *v15 )
      result = v12;
    if ( *v12 )
      result = v15;
    a1[2] = result[2];
    *(_OWORD *)a1 = *(_OWORD *)result;
  }
  else
  {
    *a1 = 2LL;
  }
  return result;
}