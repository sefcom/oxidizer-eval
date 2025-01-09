__int64 __fastcall uu_wc::Inputs::try_iter(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // r15
  __int64 (__fastcall **v6)(); // r13
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v9; // [rsp+10h] [rbp-D8h]
  __int128 v10; // [rsp+20h] [rbp-C8h]
  __int128 v11; // [rsp+30h] [rbp-B8h]
  __int128 v12; // [rsp+40h] [rbp-A8h]
  __int64 v13; // [rsp+50h] [rbp-98h]
  __int128 v14; // [rsp+60h] [rbp-88h]
  unsigned __int64 v15; // [rsp+70h] [rbp-78h] BYREF
  __int128 v16; // [rsp+78h] [rbp-70h]
  __int128 v17; // [rsp+88h] [rbp-60h]
  __int128 v18; // [rsp+98h] [rbp-50h]
  __int128 v19; // [rsp+A8h] [rbp-40h]
  __int64 v20; // [rsp+B8h] [rbp-30h]

  if ( *a2 )
  {
    if ( (unsigned int)*a2 == 1 )
    {
      result = alloc::boxed::Box<T>::new(a2[2], a2[2] + 24LL * a2[3]);
      v5 = result;
      v6 = (__int64 (__fastcall **)())&unk_131038;
    }
    else if ( a2[1] == 0x8000000000000001LL )
    {
      uu_wc::files0_iter_stdin((__int64)&v8);
      result = alloc::boxed::Box<T>::new(&v8);
      v5 = result;
      v6 = &off_1310A8;
    }
    else
    {
      uu_wc::files0_iter_file(&v8, a2[2], a2[3]);
      result = v9;
      if ( v8 == 0x8000000000000001LL )
      {
        *(_OWORD *)(a1 + 8) = v9;
        *(_QWORD *)a1 = 0x8000000000000003LL;
        return result;
      }
      v20 = v13;
      v19 = v12;
      v18 = v11;
      v17 = v10;
      v15 = v8;
      v16 = v9;
      result = alloc::boxed::Box<T>::new(&v15);
      v5 = result;
      v6 = &off_131070;
    }
  }
  else
  {
    v8 = 0x8000000000000001LL;
    LOBYTE(v9) = 1;
    result = alloc::boxed::Box<T>::new(&v8);
    v5 = result;
    v6 = &off_131000;
  }
  v7 = 0x8000000000000002LL;
  if ( *a3 != 0x8000000000000002LL )
  {
    result = core::ops::function::FnOnce::call_once(&v8, a3);
    v7 = v8;
    v14 = v9;
  }
  *(_QWORD *)a1 = v7;
  *(_OWORD *)(a1 + 8) = v14;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
