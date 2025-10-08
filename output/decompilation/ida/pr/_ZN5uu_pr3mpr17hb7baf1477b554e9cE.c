__int64 __fastcall uu_pr::mpr(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  __int64 *v5; // r13
  __int64 v6; // rax
  __int64 v7; // r13
  unsigned __int64 v8; // rbx
  __int128 v9; // kr00_16
  __int64 v10; // r12
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int64 v19; // [rsp+10h] [rbp-278h] BYREF
  __int64 v20; // [rsp+18h] [rbp-270h]
  __int64 v21; // [rsp+20h] [rbp-268h]
  __int64 v22; // [rsp+28h] [rbp-260h]
  __int64 v23; // [rsp+30h] [rbp-258h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-250h] BYREF
  __int128 v25; // [rsp+40h] [rbp-248h] BYREF
  __int128 v26; // [rsp+50h] [rbp-238h]
  __int128 v27; // [rsp+60h] [rbp-228h]
  __int128 v28; // [rsp+70h] [rbp-218h]
  unsigned __int64 v29; // [rsp+88h] [rbp-200h]
  __int128 v30; // [rsp+90h] [rbp-1F8h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-1E8h]
  __int128 v32; // [rsp+B0h] [rbp-1D8h]
  __int128 v33; // [rsp+C0h] [rbp-1C8h]
  __int128 v34; // [rsp+D0h] [rbp-1B8h]
  __int128 v35; // [rsp+E0h] [rbp-1A8h] BYREF
  __int128 v36; // [rsp+F0h] [rbp-198h]
  __int128 v37; // [rsp+100h] [rbp-188h] BYREF
  __int128 v38; // [rsp+110h] [rbp-178h]
  __int128 v39; // [rsp+120h] [rbp-168h]
  __int128 v40; // [rsp+130h] [rbp-158h]
  _BYTE v41[40]; // [rsp+148h] [rbp-140h] BYREF
  __int128 v42; // [rsp+170h] [rbp-118h]
  __int128 v43; // [rsp+180h] [rbp-108h]
  __int128 v44; // [rsp+190h] [rbp-F8h]
  __int64 v45; // [rsp+1A0h] [rbp-E8h] BYREF
  __int128 v46; // [rsp+1A8h] [rbp-E0h]
  __int64 v47; // [rsp+1B8h] [rbp-D0h]

  v22 = a4;
  v23 = a3;
  if ( a3 )
  {
    v4 = &a2[2 * a3];
    v5 = a2;
    while ( 1 )
    {
      uu_pr::open(&v45, *v5, v5[1]);
      if ( v45 != 0x8000000000000005LL )
        break;
      v5 += 2;
      core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
        v46,
        *((_QWORD *)&v46 + 1));
      if ( v5 == v4 )
      {
        v6 = v23;
        goto LABEL_7;
      }
    }
    v13 = v47;
    v14 = v46;
    *(_QWORD *)a1 = v45;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 24) = v13;
  }
  else
  {
    v6 = 0LL;
LABEL_7:
    *(_QWORD *)v41 = a2;
    *(_QWORD *)&v41[8] = &a2[2 * v6];
    *(_QWORD *)&v41[16] = 0LL;
    *(_QWORD *)&v41[24] = v22;
    *(_QWORD *)&v41[32] = &v23;
    itertools::kmerge_impl::kmerge_by(&v30, v41);
    itertools::groupbylazy::new(&v45, &v30);
    v7 = *(_QWORD *)(v22 + 304);
    v19 = 0LL;
    v20 = 8LL;
    v21 = 0LL;
    v24 = &v45;
    v8 = 0x8000000000000002LL;
    v29 = 0x8000000000000002LL;
LABEL_8:
    <itertools::groupbylazy::Groups<K,I,F> as core::iter::traits::iterator::Iterator>::next(v41, &v24);
    if ( *(_QWORD *)&v41[8] != v8 )
    {
      v34 = v44;
      v33 = v43;
      v32 = v42;
      v31 = *(_OWORD *)&v41[24];
      v30 = *(_OWORD *)&v41[8];
      v9 = v44;
      while ( 1 )
      {
        v25 = v30;
        v28 = v33;
        v27 = v32;
        v26 = v31;
        *(_QWORD *)&v30 = 0x8000000000000001LL;
        if ( (_QWORD)v25 == 0x8000000000000001LL )
        {
          core::ptr::drop_in_place<core::option::Option<uu_pr::FileLine>>(&v25);
          itertools::groupbylazy::ChunkBy<K,I,F>::step(&v37, v9, *((_QWORD *)&v9 + 1));
          if ( (_QWORD)v37 == 0x8000000000000001LL )
          {
            core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v30);
            v8 = v29;
            goto LABEL_8;
          }
        }
        else
        {
          v40 = v28;
          v39 = v27;
          v38 = v26;
          v37 = v25;
        }
        v25 = v37;
        v28 = v40;
        v27 = v39;
        v26 = v38;
        if ( (_QWORD)v37 == 0x8000000000000000LL )
        {
          <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v35, *((_QWORD *)&v25 + 1));
          v12 = v35;
          *(_OWORD *)(a1 + 16) = v36;
          *(_OWORD *)a1 = v12;
          goto LABEL_21;
        }
        v10 = *((_QWORD *)&v27 + 1);
        if ( v7 == *((_QWORD *)&v27 + 1) )
        {
          v10 = v7;
        }
        else
        {
          if ( (uu_pr::print_page(v20, v21, v22, v7) & 1) != 0 )
          {
            <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(&v35, v11);
            v16 = v35;
            *(_OWORD *)(a1 + 16) = v36;
            *(_OWORD *)a1 = v16;
            if ( (_QWORD)v25 == 0x8000000000000000LL )
              core::ptr::drop_in_place<std::io::error::Error>((char *)&v25 + 8);
            else
              core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v25);
LABEL_21:
            core::ptr::drop_in_place<itertools::groupbylazy::Group<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v30);
LABEL_22:
            core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v19);
            goto LABEL_23;
          }
          core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v19);
          v19 = 0LL;
          v20 = 8LL;
          v21 = 0LL;
        }
        alloc::vec::Vec<T,A>::push(&v19, &v37, &off_269578);
        v7 = v10;
      }
    }
    if ( (uu_pr::print_page(v20, v21, v22, v7) & 1) != 0 )
    {
      <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v41, v17);
      v18 = *(_OWORD *)v41;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v41[16];
      *(_OWORD *)a1 = v18;
      goto LABEL_22;
    }
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0x8000000000000005LL;
    core::ptr::drop_in_place<alloc::vec::Vec<uu_pr::FileLine>>(&v19);
LABEL_23:
    core::ptr::drop_in_place<itertools::groupbylazy::ChunkBy<usize,itertools::kmerge_impl::KMergeBy<core::iter::adapters::flatten::FlatMap<alloc::boxed::Box<dyn core::iter::traits::iterator::Iterator+Item = (usize,alloc::vec::Vec<uu_pr::FileLine>)>,alloc::vec::Vec<uu_pr::FileLine>,uu_pr::mpr::{{closure}}::{{closure}}>,uu_pr::mpr::{{closure}}>,uu_pr::mpr::{{closure}}>>(&v45);
  }
  return a1;
}