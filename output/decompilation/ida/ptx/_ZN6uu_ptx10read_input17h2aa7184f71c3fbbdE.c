_QWORD *__fastcall uu_ptx::read_input(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 (__fastcall **v10)(); // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _QWORD *v17; // rbx
  __int128 v19; // [rsp+8h] [rbp-160h]
  __int64 v20; // [rsp+18h] [rbp-150h]
  __int128 v21; // [rsp+20h] [rbp-148h] BYREF
  __int64 v22; // [rsp+30h] [rbp-138h]
  __int128 v23; // [rsp+38h] [rbp-130h]
  __int64 v24; // [rsp+48h] [rbp-120h]
  __int64 v25; // [rsp+50h] [rbp-118h]
  __int128 v26; // [rsp+60h] [rbp-108h] BYREF
  __int128 v27; // [rsp+70h] [rbp-F8h]
  __int64 v28; // [rsp+80h] [rbp-E8h]
  __int64 v29; // [rsp+88h] [rbp-E0h]
  __int128 v30; // [rsp+98h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-C0h]
  _BYTE v32[24]; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v33[56]; // [rsp+C8h] [rbp-A0h] BYREF
  _BYTE v34[104]; // [rsp+100h] [rbp-68h] BYREF

  v26 = *(_OWORD *)&off_250DE8;
  v27 = xmmword_250DF8;
  v28 = std::thread::local::LocalKey<T>::with();
  v29 = v5;
  if ( !a3 )
  {
LABEL_9:
    v15 = v26;
    v16 = v27;
    v17 = (_QWORD *)a1;
    *(_QWORD *)(a1 + 32) = v28;
    *(_QWORD *)(a1 + 40) = v29;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
    return v17;
  }
  v6 = 24 * a3;
  v7 = 0LL;
  while ( 1 )
  {
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a2 + 8),
                            *(_QWORD *)(a2 + 16),
                            asc_55AD1,
                            1LL) )
    {
      v8 = std::io::stdio::stdin();
      v9 = alloc::boxed::Box<T>::new(v8);
      v10 = (__int64 (__fastcall **)())&unk_2516D8;
      goto LABEL_7;
    }
    v11 = a2;
    std::fs::File::open(&v21, a2);
    if ( (_DWORD)v21 == 1 )
      break;
    v9 = alloc::boxed::Box<T>::new(DWORD1(v21));
    v10 = &off_251680;
LABEL_7:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(v33, v9, v10);
    core::iter::traits::iterator::Iterator::collect(&v21, v33);
    v11 = *((_QWORD *)&v21 + 1);
    v13 = -(__int64)v21;
    if ( __OFSUB__(-(__int64)v21, 1LL) )
    {
      v17 = (_QWORD *)a1;
      *(_QWORD *)(a1 + 8) = *((_QWORD *)&v21 + 1);
      goto LABEL_12;
    }
    v14 = v22;
    v19 = v21;
    v20 = v22;
    core::iter::traits::iterator::Iterator::collect(&v30, *((_QWORD *)&v21 + 1), *((_QWORD *)&v21 + 1) + 24 * v22, v13);
    <alloc::string::String as core::clone::Clone>::clone(v32, a2);
    v22 = v20;
    v21 = v19;
    v24 = v31;
    v23 = v30;
    v25 = v7;
    hashbrown::map::HashMap<K,V,S,A>::insert(v34, &v26, v32, &v21);
    a2 += 24LL;
    core::ptr::drop_in_place<core::option::Option<uu_ptx::FileContent>>(v34);
    v7 += v14;
    v6 -= 24LL;
    if ( !v6 )
      goto LABEL_9;
  }
  v17 = (_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = *((_QWORD *)&v21 + 1);
LABEL_12:
  *v17 = 0LL;
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>(
    &v26,
    v11,
    v12,
    v13);
  return v17;
}