__int64 __fastcall uu_sort::print_sorted(__int128 *a1, __int64 a2, __int128 *a3)
{
  bool v5; // of
  __int64 v6; // rdx
  const char *v7; // rsi
  __int128 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rax
  __int128 v20; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-98h]
  __int128 v22; // [rsp+20h] [rbp-88h] BYREF
  __int128 v23; // [rsp+30h] [rbp-78h]
  __int128 v24; // [rsp+40h] [rbp-68h]
  _BYTE v25[88]; // [rsp+50h] [rbp-58h] BYREF

  v5 = __OFSUB__(0LL, *(_QWORD *)a3);
  v6 = 15LL;
  if ( !v5 )
    v6 = *((_QWORD *)a3 + 2);
  v7 = aStandardOutput;
  if ( !v5 )
    v7 = (const char *)*((_QWORD *)a3 + 1);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v22, v7, v6);
  v21 = v23;
  v20 = v22;
  v8 = a3;
  uu_sort::Output::into_write((__int64)v25, (__int64)a3);
  v13 = *a1;
  v14 = a1[1];
  v24 = a1[2];
  v23 = v14;
  v22 = v13;
  while ( 1 )
  {
    v15 = (_QWORD *)<itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(
                      &v22,
                      v8,
                      v9,
                      v10,
                      v11,
                      v12,
                      v20,
                      *((_QWORD *)&v20 + 1),
                      v21);
    if ( !v15 )
      break;
    v16 = uu_sort::Line::print(*v15, v15[1], v25, a2);
    v8 = &v20;
    v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
            v16,
            &v20);
    if ( v17 )
      goto LABEL_10;
  }
  v18 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(v25);
  v17 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          v18,
          &v20);
  if ( v17 )
  {
LABEL_10:
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v25);
    goto LABEL_11;
  }
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(v25);
  v17 = 0LL;
LABEL_11:
  core::ptr::drop_in_place<alloc::string::String>(&v20);
  return v17;
}