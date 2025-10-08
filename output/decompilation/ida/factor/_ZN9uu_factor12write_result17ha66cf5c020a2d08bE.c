__int64 __fastcall uu_factor::write_result(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // r13
  __int64 **i; // r13
  unsigned __int64 v9; // r12
  __int64 **v10; // r15
  void *v11; // r12
  size_t v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rbp
  __int64 v15; // rbx
  __int64 *v17; // [rsp+0h] [rbp-138h]
  __int128 *v18; // [rsp+8h] [rbp-130h]
  __int64 (__fastcall *v19)(); // [rsp+10h] [rbp-128h]
  __int64 *v20; // [rsp+18h] [rbp-120h] BYREF
  void *src; // [rsp+20h] [rbp-118h]
  size_t n; // [rsp+28h] [rbp-110h]
  __int64 v23; // [rsp+30h] [rbp-108h]
  __int64 v24; // [rsp+38h] [rbp-100h]
  unsigned __int64 v25; // [rsp+48h] [rbp-F0h] BYREF
  __int128 *v26; // [rsp+50h] [rbp-E8h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+58h] [rbp-E0h]
  unsigned __int64 *v28; // [rsp+60h] [rbp-D8h]
  __int64 (__fastcall *v29)(); // [rsp+68h] [rbp-D0h]
  __int128 v30; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+80h] [rbp-B8h]
  __int128 v32; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+98h] [rbp-A0h]
  unsigned __int64 v34; // [rsp+A0h] [rbp-98h]
  __int64 v35; // [rsp+A8h] [rbp-90h] BYREF
  void *v36; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-80h]
  __int64 **v38; // [rsp+C0h] [rbp-78h]
  __int128 v39; // [rsp+C8h] [rbp-70h]
  _QWORD v40[8]; // [rsp+F8h] [rbp-40h] BYREF

  v6 = a1;
  v35 = a2;
  v20 = &v35;
  src = <&T as core::fmt::Display>::fmt;
  v36 = &unk_144140;
  v37 = 2LL;
  v38 = &v20;
  v39 = 1uLL;
  v7 = std::io::Write::write_fmt(a1, &v36);
  if ( v7 )
  {
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(a3);
  }
  else
  {
    <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v36, a3);
    if ( a4 )
    {
      while ( 1 )
      {
        <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v32, &v36);
        if ( (_QWORD)v32 == 0x8000000000000000LL )
          break;
        v31 = v33;
        v30 = v32;
        v25 = v34;
        v26 = &v30;
        v27 = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
        if ( v34 <= 1 )
        {
          v20 = (__int64 *)&off_144180;
          src = &dword_0 + 1;
          v24 = 0LL;
          n = (size_t)&v26;
          v23 = 1LL;
        }
        else
        {
          v28 = &v25;
          v29 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v20 = (__int64 *)&off_144160;
          src = &dword_0 + 2;
          v24 = 0LL;
          n = (size_t)&v26;
          v23 = 2LL;
        }
        v7 = std::io::Write::write_fmt(a1, &v20);
        if ( v7 )
          goto LABEL_17;
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v30);
      }
    }
    else
    {
      for ( i = &v20; ; i = v10 )
      {
        <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v32, &v36);
        if ( (_QWORD)v32 == 0x8000000000000000LL )
          break;
        v31 = v33;
        v30 = v32;
        v9 = v34;
        v25 = v34;
        v40[0] = &v30;
        v40[1] = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
        v20 = (__int64 *)&off_144180;
        src = &dword_0 + 1;
        v24 = 0LL;
        n = (size_t)v40;
        v23 = 1LL;
        core::option::Option<T>::map_or_else(&v26, i);
        v18 = v26;
        v10 = i;
        v19 = v27;
        alloc::slice::<impl [T]>::repeat(i, v27, v28, v9);
        v17 = v20;
        v11 = src;
        v12 = n;
        v13 = *v6;
        v14 = v6;
        v15 = v6[2];
        if ( n >= v13 - v15 )
        {
          v7 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(v14, src, n);
          v6 = v14;
          if ( v7 )
          {
            core::ptr::drop_in_place<alloc::string::String>(v17, v11);
            core::ptr::drop_in_place<alloc::string::String>(v18, v19);
LABEL_17:
            core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v30);
            core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v36);
            return v7;
          }
        }
        else
        {
          memcpy((void *)(v15 + v14[1]), src, n);
          v14[2] = v12 + v15;
          v6 = v14;
        }
        core::ptr::drop_in_place<alloc::string::String>(v17, v11);
        core::ptr::drop_in_place<alloc::string::String>(v18, v19);
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v30);
      }
    }
    core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v36);
    v36 = &off_144190;
    v37 = 1LL;
    v38 = (__int64 **)&byte_8;
    v39 = 0LL;
    v7 = std::io::Write::write_fmt(v6, &v36);
    if ( !v7 )
      return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v6);
  }
  return v7;
}