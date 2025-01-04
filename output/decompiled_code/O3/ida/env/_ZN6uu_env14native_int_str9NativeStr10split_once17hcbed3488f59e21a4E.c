__int64 __fastcall uu_env::native_int_str::NativeStr::split_once(__int64 a1, __int64 a2, unsigned int *a3)
{
  char v3; // dl
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r12
  char v8; // [rsp+Fh] [rbp-89h] BYREF
  __int128 v9; // [rsp+10h] [rbp-88h] BYREF
  __int64 v10; // [rsp+20h] [rbp-78h]
  __int128 v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+38h] [rbp-60h]
  __int128 v13; // [rsp+48h] [rbp-50h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int128 v15; // [rsp+60h] [rbp-38h] BYREF
  __int64 v16; // [rsp+70h] [rbp-28h]

  if ( uu_env::native_int_str::get_single_native_int_value(a3)
    && (v8 = v3,
        v4 = *(_QWORD *)(a2 + 16),
        *(_QWORD *)&v9 = *(_QWORD *)(a2 + 8),
        *((_QWORD *)&v9 + 1) = v4 + v9,
        <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position(&v9, &v8)) )
  {
    v6 = v5;
    uu_env::native_int_str::NativeStr::slice((__int64)&v13, a2, 0LL, v5);
    uu_env::native_int_str::NativeStr::slice((__int64)&v15, a2, v6 + 1, v4);
    v10 = v14;
    v9 = v13;
    v12 = v16;
    v11 = v15;
    *(_OWORD *)a1 = v13;
    *(_QWORD *)(a1 + 32) = *((_QWORD *)&v11 + 1);
    *(_QWORD *)(a1 + 40) = v12;
    *(_QWORD *)(a1 + 16) = v10;
    *(_QWORD *)(a1 + 24) = v11;
  }
  else
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
  }
  return a1;
}
