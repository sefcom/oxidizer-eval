__int64 __fastcall uu_tr::operation::translate_input(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  size_t v5; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v10; // [rsp+8h] [rbp-90h] BYREF
  __int64 v11; // [rsp+10h] [rbp-88h]
  __int64 v12; // [rsp+18h] [rbp-80h]
  __int64 v13; // [rsp+20h] [rbp-78h] BYREF
  void *src; // [rsp+28h] [rbp-70h]
  size_t n; // [rsp+30h] [rbp-68h]
  _QWORD v16[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v18[9]; // [rsp+50h] [rbp-48h] BYREF

  v10 = 0LL;
  v11 = 1LL;
  v12 = 0LL;
  v13 = 0LL;
  src = &dword_0 + 1;
  for ( n = 0LL; ; n = 0LL )
  {
    v3 = <std::io::stdio::StdinLock as std::io::BufRead>::read_until(a1, 10LL, &v10);
    v16[1] = v3;
    v17 = v4;
    if ( v3 || !v4 )
      break;
    v18[0] = v11;
    v18[1] = v11 + v12;
    v18[2] = a3;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(&v13, v18);
    v5 = n;
    v6 = a2[2];
    if ( *a2 - v6 > n )
    {
      memcpy((void *)(v6 + a2[1]), src, n);
      a2[2] = v5 + v6;
    }
    else
    {
      v7 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a2, src, n);
      if ( v7 )
      {
        v16[0] = v7;
        core::result::unwrap_failed(aCalledResultUn_0, 43LL, v16, &off_EB948, &off_EB968);
      }
    }
    v12 = 0LL;
  }
  if ( v3 )
    core::ptr::drop_in_place<std::io::error::Error>(&v17);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v13);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v13);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v10);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v10);
  return <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(a3);
}
