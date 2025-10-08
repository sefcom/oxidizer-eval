__int64 __fastcall alacritty::config::bindings::RawBinding::into_mouse_binding(__int64 a1, __int128 *a2)
{
  __int16 v3; // ax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int64 result; // rax
  __int16 v8; // cx
  int v9; // edx
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int16 v12; // di
  _OWORD v13[6]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h]

  v3 = *((_WORD *)a2 + 44);
  if ( v3 == 6 )
  {
    v14 = *((_QWORD *)a2 + 12);
    v13[5] = a2[5];
    v13[4] = a2[4];
    v4 = *a2;
    v5 = a2[1];
    v6 = a2[2];
    v13[3] = a2[3];
    v13[2] = v6;
    v13[1] = v5;
    v13[0] = v4;
    *(_QWORD *)(a1 + 8) = ((__int64 (__fastcall *)(_OWORD *))alloc::boxed::Box<T>::new)(v13);
    result = 0x8000000000000035LL;
    *(_QWORD *)a1 = 0x8000000000000035LL;
  }
  else
  {
    v8 = *((_WORD *)a2 + 45);
    v9 = *((_DWORD *)a2 + 23);
    v10 = *a2;
    v11 = a2[1];
    *(_OWORD *)(a1 + 32) = a2[2];
    *(_OWORD *)(a1 + 16) = v11;
    *(_OWORD *)a1 = v10;
    v12 = *((_WORD *)a2 + 48);
    *(_WORD *)(a1 + 48) = v3;
    *(_WORD *)(a1 + 50) = v8;
    *(_DWORD *)(a1 + 52) = v9;
    *(_WORD *)(a1 + 56) = v12;
    return core::ptr::drop_in_place<core::option::Option<alacritty::config::bindings::BindingKey>>(a2 + 3);
  }
  return result;
}