__int64 __fastcall uu_sort::ext_sort::sorter(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r13
  bool v8; // bp
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v13; // [rsp+8h] [rbp-50h] BYREF
  __int64 v14; // [rsp+10h] [rbp-48h]
  __int64 v15; // [rsp+18h] [rbp-40h]
  __int64 *v16; // [rsp+20h] [rbp-38h] BYREF

  result = std::sync::mpmc::Receiver<T>::recv(a1);
  if ( result )
  {
    v7 = result;
    v8 = *(_WORD *)(a3 + 131) == 0;
    while ( 1 )
    {
      v15 = v7;
      v9 = *(_QWORD *)(v7 + 32);
      v10 = *(_QWORD *)(v7 + 40);
      if ( v8 )
      {
        v13 = a3;
        v14 = v7 + 48;
        v16 = &v13;
        if ( v10 )
        {
          _BitScanReverse64(&v11, v10);
          v12 = v11 ^ 0x3F;
        }
        else
        {
          v12 = 64;
        }
        rayon::slice::quicksort::recurse(v9, v10, &v16, 0LL, (unsigned int)(64 - v12));
      }
      else
      {
        v13 = a3;
        v14 = v7 + 48;
        rayon::slice::mergesort::par_mergesort(v9, v10, &v13);
      }
      v13 = std::sync::mpmc::Sender<T>::send(a2, v7);
      if ( v13 )
        break;
      result = std::sync::mpmc::Receiver<T>::recv(a1);
      v7 = result;
      if ( !result )
        return result;
    }
    return self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v13);
  }
  return result;
}
