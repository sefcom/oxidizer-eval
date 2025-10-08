char __fastcall sniffnet::networking::types::data_info::DataInfo::compare(__int64 a1, __int64 a2, char a3, char a4)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // r9

  if ( !a3 )
  {
    if ( a4 )
    {
      if ( a4 == 1 )
      {
        v4 = (*(_OWORD *)(a1 + 32) + *(_OWORD *)(a1 + 48)) >> 64;
        v5 = *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 48);
        v10 = *(_QWORD *)(a2 + 32);
        v11 = *(_QWORD *)(a2 + 40);
        v12 = *(_QWORD *)(a2 + 56);
        v13 = *(_QWORD *)(a2 + 48);
      }
      else
      {
        v4 = (__int128)(*(_OWORD *)(a1 + 32) + *(_OWORD *)(a1 + 48)) >> 61;
        v5 = 8LL * (*(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 48));
        v11 = *(__int128 *)(a2 + 32) >> 61;
        v10 = 8LL * *(_QWORD *)(a2 + 32);
        v12 = *(__int128 *)(a2 + 48) >> 61;
        v13 = 8LL * *(_QWORD *)(a2 + 48);
      }
    }
    else
    {
      v4 = (*(_OWORD *)a1 + *(_OWORD *)(a1 + 16)) >> 64;
      v5 = *(_QWORD *)a1 + *(_QWORD *)(a1 + 16);
      v10 = *(_QWORD *)a2;
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(_QWORD *)(a2 + 24);
      v13 = *(_QWORD *)(a2 + 16);
    }
    v16 = (__PAIR128__(v12, v10) + __PAIR128__(v11, v13)) >> 64;
    v17 = v10 + v13;
    return (__PAIR128__(v16, v17) < __PAIR128__(v4, v5)) - (__PAIR128__(v4, v5) < __PAIR128__(v16, v17));
  }
  if ( a3 == 1 )
  {
    if ( a4 )
    {
      if ( a4 == 1 )
      {
        v4 = (*(_OWORD *)(a2 + 32) + *(_OWORD *)(a2 + 48)) >> 64;
        v5 = *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 48);
        v6 = *(_QWORD *)(a1 + 32);
        v7 = *(_QWORD *)(a1 + 40);
        v8 = *(_QWORD *)(a1 + 56);
        v9 = *(_QWORD *)(a1 + 48);
      }
      else
      {
        v4 = (__int128)(*(_OWORD *)(a2 + 32) + *(_OWORD *)(a2 + 48)) >> 61;
        v5 = 8LL * (*(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 48));
        v7 = *(__int128 *)(a1 + 32) >> 61;
        v6 = 8LL * *(_QWORD *)(a1 + 32);
        v8 = *(__int128 *)(a1 + 48) >> 61;
        v9 = 8LL * *(_QWORD *)(a1 + 48);
      }
    }
    else
    {
      v4 = (*(_OWORD *)a2 + *(_OWORD *)(a2 + 16)) >> 64;
      v5 = *(_QWORD *)a2 + *(_QWORD *)(a2 + 16);
      v6 = *(_QWORD *)a1;
      v7 = *(_QWORD *)(a1 + 8);
      v8 = *(_QWORD *)(a1 + 24);
      v9 = *(_QWORD *)(a1 + 16);
    }
    v16 = (__PAIR128__(v8, v6) + __PAIR128__(v7, v9)) >> 64;
    v17 = v6 + v9;
    return (__PAIR128__(v16, v17) < __PAIR128__(v4, v5)) - (__PAIR128__(v4, v5) < __PAIR128__(v16, v17));
  }
  v14 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(a2 + 64) == v14 )
    return (*(_DWORD *)(a2 + 72) > *(_DWORD *)(a1 + 72)) - (*(_DWORD *)(a2 + 72) < *(_DWORD *)(a1 + 72));
  else
    return (*(_QWORD *)(a2 + 64) > v14) - (*(_QWORD *)(a2 + 64) < v14);
}