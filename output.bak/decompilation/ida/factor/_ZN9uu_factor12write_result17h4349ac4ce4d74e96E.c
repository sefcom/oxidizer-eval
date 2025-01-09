__int64 __fastcall uu_factor::write_result(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r13
  unsigned __int64 v8; // r13
  size_t v9; // r13
  __int64 v10; // rbp
  __int64 *v11; // [rsp+0h] [rbp-158h] BYREF
  __int64 (__fastcall *v12)(); // [rsp+8h] [rbp-150h]
  __int128 *v13; // [rsp+10h] [rbp-148h]
  __int64 v14; // [rsp+18h] [rbp-140h]
  __int64 v15; // [rsp+20h] [rbp-138h]
  __int128 v16; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 *v17; // [rsp+40h] [rbp-118h]
  __int64 (__fastcall *v18)(); // [rsp+48h] [rbp-110h]
  unsigned __int64 v19; // [rsp+58h] [rbp-100h] BYREF
  __int128 v20; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v21; // [rsp+70h] [rbp-E8h]
  __int128 v22; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+88h] [rbp-D0h]
  unsigned __int64 v24; // [rsp+90h] [rbp-C8h]
  __int64 v25; // [rsp+98h] [rbp-C0h] BYREF
  void *v26; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-B0h]
  __int64 **v28; // [rsp+B0h] [rbp-A8h]
  __int128 v29; // [rsp+B8h] [rbp-A0h]
  char v30[8]; // [rsp+E8h] [rbp-70h] BYREF
  void *src; // [rsp+F0h] [rbp-68h]
  size_t n; // [rsp+F8h] [rbp-60h]
  _QWORD v33[2]; // [rsp+100h] [rbp-58h] BYREF
  __int128 v34; // [rsp+110h] [rbp-48h] BYREF
  unsigned __int64 *v35; // [rsp+120h] [rbp-38h]

  v25 = a2;
  v11 = &v25;
  v12 = <&T as core::fmt::Display>::fmt;
  v26 = &unk_18ADC0;
  v27 = 2LL;
  v28 = &v11;
  v29 = 1uLL;
  v6 = std::io::Write::write_fmt(a1, &v26);
  if ( v6 )
  {
    core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<num_bigint::biguint::BigUint,usize>>(a3);
  }
  else
  {
    <alloc::collections::btree::map::BTreeMap<K,V,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v26, a3);
    if ( a4 )
    {
      while ( 1 )
      {
        <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v22, &v26);
        if ( (_QWORD)v22 == 0x8000000000000000LL )
          break;
        v21 = v23;
        v20 = v22;
        v19 = v24;
        *(_QWORD *)&v16 = &v20;
        *((_QWORD *)&v16 + 1) = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
        if ( v24 <= 1 )
        {
          v11 = (__int64 *)&off_18AE00;
          v12 = (__int64 (__fastcall *)())(&dword_0 + 1);
          v15 = 0LL;
          v13 = &v16;
          v14 = 1LL;
        }
        else
        {
          v17 = &v19;
          v18 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
          v11 = (__int64 *)&off_18ADE0;
          v12 = (__int64 (__fastcall *)())(&dword_0 + 2);
          v15 = 0LL;
          v13 = &v16;
          v14 = 2LL;
        }
        v6 = std::io::Write::write_fmt(a1, &v11);
        if ( v6 )
          goto LABEL_19;
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v20);
      }
    }
    else
    {
      while ( 1 )
      {
        <alloc::collections::btree::map::IntoIter<K,V,A> as core::iter::traits::iterator::Iterator>::next(&v22, &v26);
        if ( (_QWORD)v22 == 0x8000000000000000LL )
          break;
        v21 = v23;
        v20 = v22;
        v8 = v24;
        v19 = v24;
        v33[0] = &v20;
        v33[1] = <num_bigint::biguint::BigUint as core::fmt::Display>::fmt;
        v11 = (__int64 *)&off_18AE00;
        v12 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v15 = 0LL;
        v13 = (__int128 *)v33;
        v14 = 1LL;
        core::option::Option<T>::map_or_else(&v34, &v11);
        v16 = v34;
        v17 = v35;
        alloc::str::<impl str>::repeat(v30, *((_QWORD *)&v34 + 1), v35, v8);
        v9 = n;
        v10 = a1[2];
        if ( n >= *a1 - v10 )
        {
          v6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, src, n);
          if ( v6 )
          {
            core::ptr::drop_in_place<alloc::string::String>(v30);
            core::ptr::drop_in_place<alloc::string::String>(&v16);
LABEL_19:
            core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v20);
            core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v26);
            return v6;
          }
        }
        else
        {
          memcpy((void *)(v10 + a1[1]), src, n);
          a1[2] = v9 + v10;
        }
        core::ptr::drop_in_place<alloc::string::String>(v30);
        core::ptr::drop_in_place<alloc::string::String>(&v16);
        core::ptr::drop_in_place<num_bigint::biguint::BigUint>(&v20);
      }
    }
    core::ptr::drop_in_place<alloc::collections::btree::map::IntoIter<num_bigint::biguint::BigUint,usize>>(&v26);
    v26 = &off_18AE10;
    v27 = 1LL;
    v28 = (__int64 **)&byte_8;
    v29 = 0LL;
    v6 = std::io::Write::write_fmt(a1, &v26);
    if ( !v6 )
      return <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(a1);
  }
  return v6;
}
