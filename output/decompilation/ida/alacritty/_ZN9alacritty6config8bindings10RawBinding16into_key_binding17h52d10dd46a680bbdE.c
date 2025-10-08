unsigned __int64 __fastcall alacritty::config::bindings::RawBinding::into_key_binding(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm3
  __int16 v10; // dx
  __int128 v11; // [rsp+20h] [rbp-48h]
  __int128 v12; // [rsp+30h] [rbp-38h]

  if ( *(_WORD *)(a2 + 48) == 5 )
  {
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(a2, a2, a3, a4, a5, a6);
    result = 0x8000000000000035LL;
    *(_QWORD *)a1 = 0x8000000000000035LL;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 80);
    v8 = *(_OWORD *)(a2 + 64);
    v12 = *(_OWORD *)(a2 + 48);
    result = *(unsigned int *)(a2 + 92);
    v9 = *(_OWORD *)(a2 + 16);
    v11 = *(_OWORD *)(a2 + 32);
    v10 = *(_WORD *)(a2 + 96);
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 48) = v12;
    *(_OWORD *)(a1 + 64) = v8;
    *(_QWORD *)(a1 + 80) = v7;
    *(_DWORD *)(a1 + 88) = result;
    *(_WORD *)(a1 + 92) = v10;
  }
  return result;
}