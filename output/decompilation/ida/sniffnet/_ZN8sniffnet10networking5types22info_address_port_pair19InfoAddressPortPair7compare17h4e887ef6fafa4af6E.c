char __fastcall sniffnet::networking::types::info_address_port_pair::InfoAddressPortPair::compare(
        __int64 *a1,
        _QWORD *a2,
        char a3,
        char a4)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int128 v10; // rdi
  __int128 v12; // rt0

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( a4 )
      {
        if ( a4 == 1 )
        {
          v4 = *a2;
          v5 = a2[1];
          v6 = *a1;
          v7 = a1[1];
        }
        else
        {
          v5 = *(__int128 *)a2 >> 61;
          v4 = 8LL * *a2;
          v12 = *(_OWORD *)a1;
          v7 = *(__int128 *)a1 >> 61;
          v6 = 8 * v12;
        }
      }
      else
      {
        v4 = a2[2];
        v5 = a2[3];
        v6 = a1[2];
        v7 = a1[3];
      }
      return (__PAIR128__(v7, v6) < __PAIR128__(v5, v4)) - (__PAIR128__(v5, v4) < __PAIR128__(v7, v6));
    }
    else
    {
      return <sniffnet::utils::types::timestamp::Timestamp as core::cmp::Ord>::cmp(a2[6], a2[7], a1[6], a1[7]);
    }
  }
  else
  {
    if ( a4 )
    {
      if ( a4 == 1 )
      {
        v8 = *a1;
        v9 = a1[1];
        v10 = *(_OWORD *)a2;
      }
      else
      {
        v9 = *(__int128 *)a1 >> 61;
        v8 = 8 * *a1;
        v10 = *(_OWORD *)a2 * 8LL;
      }
    }
    else
    {
      v8 = a1[2];
      v9 = a1[3];
      v10 = *((_OWORD *)a2 + 1);
    }
    return (v10 < __PAIR128__(v9, v8)) - (__PAIR128__(v9, v8) < v10);
  }
}