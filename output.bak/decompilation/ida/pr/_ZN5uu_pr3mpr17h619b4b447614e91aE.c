_QWORD *__fastcall uu_pr::mpr(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int64 v16; // rdx
  __int128 v17; // xmm0
  __int64 v19; // [rsp+10h] [rbp-298h] BYREF
  __int64 v20; // [rsp+18h] [rbp-290h]
  __int64 v21; // [rsp+20h] [rbp-288h]
  __int64 v22; // [rsp+28h] [rbp-280h]
  __int64 v23; // [rsp+30h] [rbp-278h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-270h] BYREF
  __int128 v25; // [rsp+40h] [rbp-268h] BYREF
  __int128 v26; // [rsp+50h] [rbp-258h]
  __int128 v27; // [rsp+60h] [rbp-248h]
  __int128 v28; // [rsp+70h] [rbp-238h]
  __int128 v29; // [rsp+80h] [rbp-228h] BYREF
  __int128 v30; // [rsp+90h] [rbp-218h]
  __int128 v31; // [rsp+A0h] [rbp-208h]
  __int128 v32; // [rsp+B0h] [rbp-1F8h]
  unsigned __int64 v33; // [rsp+C8h] [rbp-1E0h]
  __int128 v34; // [rsp+D0h] [rbp-1D8h] BYREF
  __int128 v35; // [rsp+E0h] [rbp-1C8h]
  __int128 v36; // [rsp+F0h] [rbp-1B8h]
  __int128 v37; // [rsp+100h] [rbp-1A8h]
  __int128 v38; // [rsp+110h] [rbp-198h]
  _BYTE v39[40]; // [rsp+128h] [rbp-180h] BYREF
  __int128 v40; // [rsp+150h] [rbp-158h]
  __int128 v41; // [rsp+160h] [rbp-148h]
  __int128 v42; // [rsp+170h] [rbp-138h]
  __int128 v43; // [rsp+180h] [rbp-128h] BYREF
  __int128 v44; // [rsp+190h] [rbp-118h]
  __int128 v45; // [rsp+1A0h] [rbp-108h]
  __int128 v46; // [rsp+1B0h] [rbp-F8h]
  __int64 v47; // [rsp+1C0h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+1C8h] [rbp-E0h]
  __int64 v49; // [rsp+1D0h] [rbp-D8h]
  __int64 v50; // [rsp+1D8h] [rbp-D0h]

  v22 = a4;
  v4 = a3;
  v23 = a3;
  *(_QWORD *)v39 = a2;
  *(_QWORD *)&v39[8] = a2 + 16 * a3;
  v6 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v39);
  if ( v6 )
  {
    while ( 1 )
    {
      uu_pr::open(&v47, *v6, v6[1]);
      v7 = v48;
      v8 = v49;
      if ( v47 != 0x8000000000000005LL )
        break;
      core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read>>(v48, v49);
      v6 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v39);
      if ( !v6 )
      {
        v4 = v23;
        goto LABEL_5;
      }
    }
    v13 = v50;
    *a1 = v47;
    a1[1] = v7;
    a1[2] = v8;
    a1[3] = v13;
  }
  else
  {
LABEL_5:
    *(_QWORD *)v39 = a2;
    *(_QWORD *)&v39[8] = a2 + 16 * v4;
    *(_QWORD *)&v39[16] = 0LL;
    *(_QWORD *)&v39[24] = v22;
    *(_QWORD *)&v39[32] = &v23;
    itertools::kmerge_impl::kmerge_by(&v34, v39);
    itertools::groupbylazy::new(&v47, &v34);
    v9 = *(_QWORD *)(v22 + 304);
    v19 = 0LL;
    v20 = 8LL;
    v21 = 0LL;
    v24 = &v47;
    v33 = 0x8000000000000002LL;
LABEL_6:
    <itertools::groupbylazy::Groups<K,I,F> as core::iter::traits::iterator::Iterator>::next(v39, &v24);
    if ( *(_QWORD *)&v39[8] != v33 )
    {
      v38 = v42;
      v37 = v41;
      v36 = v40;
      v35 = *(_OWORD *)&v39[24];
      v34 = *(_OWORD *)&v39[8];
      while ( 1 )
      {
        v29 = v34;
        v32 = v37;
        v31 = v36;
        v30 = v35;
        *(_QWORD *)&v34 = 0x8000000000000001LL;
        if ( (_QWORD)v29 == 0x8000000000000001LL )
        {
          core::ptr::drop_in_place<core::option::Option<uu_pr::FileLine>>(&v29);
          itertools::groupbylazy::ChunkBy<K,I,F>::step(&v43, v38, *((_QWORD *)&v38 + 1));
          if ( (_QWORD)v43 == 0x8000000000000001LL )
          {
            core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v34);
            goto LABEL_6;
          }
        }
        else
        {
          v46 = v32;
          v45 = v31;
          v44 = v30;
          v43 = v29;
        }
        v25 = v43;
        v28 = v46;
        v27 = v45;
        v26 = v44;
        if ( (_QWORD)v43 == 0x8000000000000000LL )
        {
          <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v29, *((_QWORD *)&v25 + 1));
          v12 = v29;
          *((_OWORD *)a1 + 1) = v30;
          *(_OWORD *)a1 = v12;
          if ( (_QWORD)v25 == 0x8000000000000000LL )
            goto LABEL_24;
          goto LABEL_23;
        }
        v10 = *((_QWORD *)&v27 + 1);
        if ( v9 == *((_QWORD *)&v27 + 1) )
        {
          v10 = v9;
        }
        else
        {
          if ( uu_pr::print_page(v20, v21, v22, v9) )
          {
            <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v29, v11);
            v14 = v29;
            *((_OWORD *)a1 + 1) = v30;
            *(_OWORD *)a1 = v14;
            if ( (_QWORD)v25 == 0x8000000000000000LL )
            {
              core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&v25 + 1));
              goto LABEL_24;
            }
LABEL_23:
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v25);
LABEL_24:
            core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v34);
LABEL_25:
            core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v19);
            goto LABEL_26;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v19);
          v19 = 0LL;
          v20 = 8LL;
          v21 = 0LL;
        }
        v32 = v28;
        v31 = v27;
        v30 = v26;
        v29 = v25;
        alloc::vec::Vec<T,A>::push(&v19, &v29);
        v9 = v10;
      }
    }
    if ( uu_pr::print_page(v20, v21, v22, v9) )
    {
      <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v39, v16);
      v17 = *(_OWORD *)v39;
      *((_OWORD *)a1 + 1) = *(_OWORD *)&v39[16];
      *(_OWORD *)a1 = v17;
      goto LABEL_25;
    }
    *((_DWORD *)a1 + 2) = 0;
    *a1 = 0x8000000000000005LL;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v19);
LABEL_26:
    core::ptr::drop_in_place<itertools::groupbylazy::ChunkBy<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v47);
  }
  return a1;
}
