_QWORD *__fastcall uu_pr::mpr(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int64 v21; // [rsp+10h] [rbp-298h] BYREF
  __int64 v22; // [rsp+18h] [rbp-290h]
  unsigned __int64 v23; // [rsp+20h] [rbp-288h]
  __int64 v24; // [rsp+28h] [rbp-280h]
  __int64 v25; // [rsp+30h] [rbp-278h] BYREF
  __int64 *v26; // [rsp+38h] [rbp-270h] BYREF
  __int128 v27; // [rsp+40h] [rbp-268h] BYREF
  __int128 v28; // [rsp+50h] [rbp-258h]
  __int128 v29; // [rsp+60h] [rbp-248h]
  __int128 v30; // [rsp+70h] [rbp-238h]
  __int128 v31; // [rsp+80h] [rbp-228h] BYREF
  __int128 v32; // [rsp+90h] [rbp-218h]
  __int128 v33; // [rsp+A0h] [rbp-208h]
  __int128 v34; // [rsp+B0h] [rbp-1F8h]
  unsigned __int64 v35; // [rsp+C8h] [rbp-1E0h]
  __int128 v36; // [rsp+D0h] [rbp-1D8h] BYREF
  __int128 v37; // [rsp+E0h] [rbp-1C8h]
  __int128 v38; // [rsp+F0h] [rbp-1B8h]
  __int128 v39; // [rsp+100h] [rbp-1A8h]
  __int128 v40; // [rsp+110h] [rbp-198h]
  _BYTE v41[40]; // [rsp+128h] [rbp-180h] BYREF
  __int128 v42; // [rsp+150h] [rbp-158h]
  __int128 v43; // [rsp+160h] [rbp-148h]
  __int128 v44; // [rsp+170h] [rbp-138h]
  __int128 v45; // [rsp+180h] [rbp-128h] BYREF
  __int128 v46; // [rsp+190h] [rbp-118h]
  __int128 v47; // [rsp+1A0h] [rbp-108h]
  __int128 v48; // [rsp+1B0h] [rbp-F8h]
  __int64 v49; // [rsp+1C0h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+1C8h] [rbp-E0h]
  __int64 v51; // [rsp+1D0h] [rbp-D8h]
  __int64 v52; // [rsp+1D8h] [rbp-D0h]

  v24 = a4;
  v4 = a3;
  v25 = a3;
  *(_QWORD *)v41 = a2;
  *(_QWORD *)&v41[8] = a2 + 16 * a3;
  v6 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v41);
  if ( v6 )
  {
    while ( 1 )
    {
      uu_pr::open(&v49, *v6, v6[1]);
      v7 = v50;
      v8 = v51;
      if ( v49 != 0x8000000000000005LL )
        break;
      core::ptr::drop_in_place<alloc::boxed::Box<dyn std::io::Read>>(v50, v51);
      v6 = (__int64 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v41);
      if ( !v6 )
      {
        v4 = v25;
        goto LABEL_5;
      }
    }
    v15 = v52;
    *a1 = v49;
    a1[1] = v7;
    a1[2] = v8;
    a1[3] = v15;
  }
  else
  {
LABEL_5:
    *(_QWORD *)v41 = a2;
    *(_QWORD *)&v41[8] = a2 + 16 * v4;
    *(_QWORD *)&v41[16] = 0LL;
    *(_QWORD *)&v41[24] = v24;
    *(_QWORD *)&v41[32] = &v25;
    itertools::kmerge_impl::kmerge_by(&v36, v41);
    itertools::groupbylazy::new(&v49, &v36);
    v9 = *(_QWORD *)(v24 + 304);
    v21 = 0LL;
    v22 = 8LL;
    v23 = 0LL;
    v26 = &v49;
    v35 = 0x8000000000000002LL;
LABEL_6:
    <itertools::groupbylazy::Groups<K,I,F> as core::iter::traits::iterator::Iterator>::next(v41, &v26);
    if ( *(_QWORD *)&v41[8] != v35 )
    {
      v40 = v44;
      v39 = v43;
      v38 = v42;
      v37 = *(_OWORD *)&v41[24];
      v36 = *(_OWORD *)&v41[8];
      while ( 1 )
      {
        v31 = v36;
        v34 = v39;
        v33 = v38;
        v32 = v37;
        *(_QWORD *)&v36 = 0x8000000000000001LL;
        if ( (_QWORD)v31 == 0x8000000000000001LL )
        {
          core::ptr::drop_in_place<core::option::Option<uu_pr::FileLine>>(&v31);
          itertools::groupbylazy::ChunkBy<K,I,F>::step(&v45, v40, *((_QWORD *)&v40 + 1));
          if ( (_QWORD)v45 == 0x8000000000000001LL )
          {
            core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v36);
            goto LABEL_6;
          }
        }
        else
        {
          v48 = v34;
          v47 = v33;
          v46 = v32;
          v45 = v31;
        }
        v27 = v45;
        v30 = v48;
        v29 = v47;
        v28 = v46;
        if ( (_QWORD)v45 == 0x8000000000000000LL )
        {
          <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v31, *((_QWORD *)&v27 + 1));
          v14 = v31;
          *((_OWORD *)a1 + 1) = v32;
          *(_OWORD *)a1 = v14;
          if ( (_QWORD)v27 == 0x8000000000000000LL )
            goto LABEL_24;
          goto LABEL_23;
        }
        v12 = *((_QWORD *)&v29 + 1);
        if ( v9 == *((_QWORD *)&v29 + 1) )
        {
          v12 = v9;
        }
        else
        {
          if ( uu_pr::print_page(v22, v23, v24, v9, v10, v11) )
          {
            <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v31, v13);
            v16 = v31;
            *((_OWORD *)a1 + 1) = v32;
            *(_OWORD *)a1 = v16;
            if ( (_QWORD)v27 == 0x8000000000000000LL )
            {
              core::ptr::drop_in_place<std::io::error::Error>(*((_QWORD *)&v27 + 1));
              goto LABEL_24;
            }
LABEL_23:
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v27);
LABEL_24:
            core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v36);
LABEL_25:
            core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v21);
            goto LABEL_26;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v21);
          v21 = 0LL;
          v22 = 8LL;
          v23 = 0LL;
        }
        v34 = v30;
        v33 = v29;
        v32 = v28;
        v31 = v27;
        alloc::vec::Vec<T,A>::push(&v21, &v31);
        v9 = v12;
      }
    }
    if ( uu_pr::print_page(v22, v23, v24, v9, v10, v11) )
    {
      <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v41, v18);
      v19 = *(_OWORD *)v41;
      *((_OWORD *)a1 + 1) = *(_OWORD *)&v41[16];
      *(_OWORD *)a1 = v19;
      goto LABEL_25;
    }
    *((_DWORD *)a1 + 2) = 0;
    *a1 = 0x8000000000000005LL;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v21);
LABEL_26:
    core::ptr::drop_in_place<itertools::groupbylazy::ChunkBy<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v49);
  }
  return a1;
}
