_QWORD *__fastcall uu_sort::merge::merge_with_file_limit(_QWORD *a1, __int128 *a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned __int64 v13; // r14
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int128 v19; // xmm0
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r15
  __int64 v22; // rbx
  _QWORD *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r14
  __int64 v30; // rbx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v34; // rax
  __int64 v35; // [rsp+10h] [rbp-4D8h] BYREF
  __int64 v36; // [rsp+18h] [rbp-4D0h]
  __int64 v37; // [rsp+20h] [rbp-4C8h]
  unsigned __int64 v38; // [rsp+28h] [rbp-4C0h]
  __int64 v39; // [rsp+30h] [rbp-4B8h]
  _QWORD *v40; // [rsp+38h] [rbp-4B0h]
  char *v41; // [rsp+40h] [rbp-4A8h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-4A0h]
  unsigned __int128 v43; // [rsp+50h] [rbp-498h]
  __int64 v44; // [rsp+60h] [rbp-488h]
  __int128 v45; // [rsp+68h] [rbp-480h] BYREF
  _BYTE v46[40]; // [rsp+78h] [rbp-470h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-448h]
  __int128 v48; // [rsp+B0h] [rbp-438h]
  __int64 v49; // [rsp+C0h] [rbp-428h] BYREF
  __int64 v50; // [rsp+C8h] [rbp-420h]
  __int128 v51; // [rsp+D0h] [rbp-418h]
  __int128 v52; // [rsp+E0h] [rbp-408h] BYREF
  __int128 v53; // [rsp+F0h] [rbp-3F8h]
  __int128 v54; // [rsp+100h] [rbp-3E8h]
  __int128 v55; // [rsp+110h] [rbp-3D8h]
  _OWORD v56[2]; // [rsp+120h] [rbp-3C8h] BYREF
  __int64 v57; // [rsp+140h] [rbp-3A8h]
  __int128 v58; // [rsp+150h] [rbp-398h] BYREF
  _BYTE v59[80]; // [rsp+160h] [rbp-388h]
  _QWORD v60[2]; // [rsp+1B0h] [rbp-338h] BYREF
  __int128 v61; // [rsp+1C0h] [rbp-328h]
  _OWORD v62[2]; // [rsp+1D0h] [rbp-318h] BYREF
  __int64 v63; // [rsp+1F0h] [rbp-2F8h]
  void *v64; // [rsp+1F8h] [rbp-2F0h]
  _OWORD v65[3]; // [rsp+208h] [rbp-2E0h] BYREF
  __int128 v66; // [rsp+238h] [rbp-2B0h] BYREF
  __int64 v67; // [rsp+248h] [rbp-2A0h]
  __int128 v68; // [rsp+250h] [rbp-298h]
  __int128 v69; // [rsp+260h] [rbp-288h]
  __int128 v70; // [rsp+270h] [rbp-278h]
  __int128 v71; // [rsp+280h] [rbp-268h]
  __int128 v72; // [rsp+290h] [rbp-258h]
  _OWORD v73[3]; // [rsp+2A0h] [rbp-248h] BYREF
  _OWORD v74[3]; // [rsp+2D0h] [rbp-218h] BYREF
  _OWORD v75[6]; // [rsp+300h] [rbp-1E8h] BYREF
  _QWORD v76[6]; // [rsp+360h] [rbp-188h] BYREF
  __int128 v77; // [rsp+390h] [rbp-158h] BYREF
  __int64 v78; // [rsp+3A0h] [rbp-148h]
  __int128 v79; // [rsp+3A8h] [rbp-140h]
  __int128 v80; // [rsp+3B8h] [rbp-130h]
  __int128 v81; // [rsp+3C8h] [rbp-120h]
  __int128 v82; // [rsp+3D8h] [rbp-110h]
  __int64 v83; // [rsp+3E8h] [rbp-100h]
  char v84[8]; // [rsp+3F0h] [rbp-F8h] BYREF
  char v85[240]; // [rsp+3F8h] [rbp-F0h] BYREF

  v39 = a4;
  v4 = *((_QWORD *)a2 + 3);
  v5 = v4 < *((_QWORD *)a2 + 1);
  v6 = v4 - *((_QWORD *)a2 + 1);
  if ( v5 )
    core::panicking::panic_nounwind(anon_ff3add0fc2121d489142e144a6a370f6_24_llvm_5182399808099546885, 71LL);
  v7 = a3;
  v8 = a1;
  v9 = v6 / 0x18;
  v10 = a3[14];
  if ( v6 / 0x18 <= v10 )
  {
    v31 = *a2;
    v32 = a2[1];
    v74[2] = a2[2];
    v74[1] = v32;
    v74[0] = v31;
    uu_sort::merge::merge_without_limit(a1, v74, v7);
    return v8;
  }
  v11 = *a2;
  v12 = a2[1];
  v72 = a2[2];
  v71 = v12;
  v70 = v11;
  if ( !v10 )
    core::panicking::panic(
      anon_ff3add0fc2121d489142e144a6a370f6_41_llvm_5182399808099546885,
      27LL,
      &anon_ff3add0fc2121d489142e144a6a370f6_43_llvm_5182399808099546885);
  v13 = 0x8000000000000000LL;
  v14 = *a2;
  v15 = a2[1];
  v54 = a2[2];
  v53 = v15;
  v52 = v14;
  itertools::groupbylazy::new_chunks(v84, &v52);
  v41 = v84;
  v35 = 0LL;
  v36 = 8LL;
  v37 = 0LL;
  v38 = 0x8000000000000002LL;
  v16 = v9;
  v40 = v7;
  do
  {
    v20 = v7[14];
    v5 = v16 < v20;
    v16 -= v20;
    if ( v5 )
      v16 = 0LL;
    <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(v65, &v41);
    if ( *(_QWORD *)&v65[0] == v38 )
      core::option::unwrap_failed(&off_1D4C20);
    v73[2] = v65[2];
    v73[1] = v65[1];
    v73[0] = v65[0];
    uu_sort::merge::merge_without_limit(&v77, v73, v7);
    v42 = v9;
    v21 = *((_QWORD *)&v77 + 1);
    v22 = v78;
    if ( (_QWORD)v77 == 3LL )
    {
LABEL_19:
      v8 = a1;
      a1[1] = v21;
      a1[2] = v22;
      *a1 = 3LL;
      goto LABEL_25;
    }
    *(_QWORD *)&v59[72] = v83;
    *(_OWORD *)&v59[56] = v82;
    *(_OWORD *)&v59[40] = v81;
    *(_OWORD *)&v59[24] = v80;
    *(_OWORD *)&v59[8] = v79;
    v58 = v77;
    *(_QWORD *)v59 = v78;
    uu_sort::tmp_dir::TmpDirWrapper::next_file(&v49, v39);
    v23 = v40;
    if ( v50 == v13 )
    {
      v25 = *((_QWORD *)&v51 + 1);
      v24 = v51;
LABEL_21:
      v8 = a1;
      a1[1] = v24;
      a1[2] = v25;
      *a1 = 3LL;
      core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&v58);
LABEL_25:
      core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&v35);
      goto LABEL_26;
    }
    v60[0] = v49;
    v60[1] = v50;
    v61 = v51;
    if ( v40[6] != v13 )
      core::slice::raw::from_raw_parts::precondition_check(v40[7], 1LL, 1LL, v40[8]);
    <uu_sort::merge::WriteablePlainTmpFile as uu_sort::merge::WriteableTmpFile>::create(&v66, v60);
    v24 = *((_QWORD *)&v66 + 1);
    v25 = v67;
    if ( (_QWORD)v66 == v13 )
      goto LABEL_21;
    *(_OWORD *)&v46[24] = v69;
    *(_OWORD *)&v46[8] = v68;
    v45 = v66;
    *(_QWORD *)v46 = v67;
    v75[0] = v58;
    v75[1] = *(_OWORD *)v59;
    v75[2] = *(_OWORD *)&v59[16];
    v75[3] = *(_OWORD *)&v59[32];
    v75[4] = *(_OWORD *)&v59[48];
    v75[5] = *(_OWORD *)&v59[64];
    v26 = uu_sort::merge::FileMerger::write_all_to(v75, v23);
    if ( v26 )
    {
      v8 = a1;
      a1[1] = v26;
      a1[2] = v27;
      *a1 = 3LL;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v52, &v45);
      if ( *((_QWORD *)&v52 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v46, v52, *((_QWORD *)&v52 + 1), v53);
      core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>(&v46[8]);
      goto LABEL_25;
    }
    v28 = v13;
    v55 = v45;
    v56[0] = *(_OWORD *)v46;
    v57 = *(_QWORD *)&v46[32];
    v56[1] = *(_OWORD *)&v46[16];
    v21 = *((_QWORD *)&v45 + 1);
    v29 = v45;
    v22 = *(_QWORD *)v46;
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::fs::File>>((char *)v56 + 8);
    if ( v29 == v28 )
      goto LABEL_19;
    v43 = __PAIR128__(v21, v29);
    v44 = v22;
    v30 = v37;
    if ( v37 == v35 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v35);
    v17 = v36;
    v18 = 3 * v30;
    v19 = v43;
    *(_QWORD *)(v36 + 8 * v18 + 16) = v44;
    *(_OWORD *)(v17 + 8 * v18) = v19;
    v37 = v30 + 1;
    v9 = v16;
    v7 = v40;
    v13 = v28;
  }
  while ( v42 > v20 );
  <itertools::groupbylazy::Chunks<I> as core::iter::traits::iterator::Iterator>::next(v76, &v41);
  v8 = a1;
  if ( v76[0] != v38 )
  {
    core::ptr::drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>>>>(v76);
    core::panicking::panic(aAssertionFaile_25, 42LL, &off_1D4BE0);
  }
  *(_QWORD *)&v47 = v36;
  *(_QWORD *)&v48 = v35;
  *((_QWORD *)&v47 + 1) = v36;
  *((_QWORD *)&v48 + 1) = v36 + 24 * v37;
  v34 = alloc::alloc::Global::alloc_impl(1LL, 1LL, 0LL, 0LL);
  if ( !v34 )
    alloc::alloc::handle_alloc_error(1LL, 0LL);
  v62[1] = v48;
  v62[0] = v47;
  v63 = v34;
  v64 = &unk_1D4C38;
  uu_sort::merge::merge_with_file_limit(a1, v62, v7, v39);
LABEL_26:
  core::ptr::drop_in_place<itertools::groupbylazy::GroupInner<usize,core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>+Output = core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>,itertools::groupbylazy::ChunkIndex>>(v85);
  return v8;
}
