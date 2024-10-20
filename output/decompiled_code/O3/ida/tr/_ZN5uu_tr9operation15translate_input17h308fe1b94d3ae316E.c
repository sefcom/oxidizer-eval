__int64 __fastcall uu_tr::operation::translate_input(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  size_t v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v11; // [rsp+8h] [rbp-90h] BYREF
  __int64 v12; // [rsp+10h] [rbp-88h]
  __int64 v13; // [rsp+18h] [rbp-80h]
  __int64 v14; // [rsp+20h] [rbp-78h] BYREF
  void *src; // [rsp+28h] [rbp-70h]
  size_t n; // [rsp+30h] [rbp-68h]
  _QWORD v17[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v19[9]; // [rsp+50h] [rbp-48h] BYREF

  v11 = 0LL;
  v12 = 1LL;
  v13 = 0LL;
  v14 = 0LL;
  src = &dword_0 + 1;
  for ( n = 0LL; ; n = 0LL )
  {
    v4 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a1, 10LL, &v11);
    v17[1] = v4;
    v18 = v5;
    if ( v4 || !v5 )
      break;
    v19[0] = v12;
    v19[1] = v12 + v13;
    v6 = a3;
    v19[2] = a3;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v14, v19);
    v7 = n;
    v8 = a2[2];
    if ( *a2 - v8 > n )
    {
      memcpy((void *)(v8 + a2[1]), src, n);
      a2[2] = v7 + v8;
      a3 = v6;
    }
    else
    {
      v9 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, src, n);
      a3 = v6;
      if ( v9 )
      {
        v17[0] = v9;
        core::result::unwrap_failed(aCalledResultUn_0, 43LL, v17, &off_EB948, &off_EB968);
      }
    }
    v13 = 0LL;
  }
  if ( v4 )
    core::ptr::drop_in_place<std::io::error::Error>(&v18);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v14);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v14);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v11);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v11);
  <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(a3);
  return <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(a3 + 48);
}
