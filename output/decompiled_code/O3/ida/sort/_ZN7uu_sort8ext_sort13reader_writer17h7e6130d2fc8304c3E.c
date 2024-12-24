        __int64 a7)
{
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int128 v21; // xmm0
  __int64 *v22; // rdi
  __int128 v23; // xmm0
  __int128 v25; // [rsp-18h] [rbp-1C0h]
  __int64 v26; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v27; // [rsp+8h] [rbp-1A0h] BYREF
  __int128 v28; // [rsp+10h] [rbp-198h] BYREF
  __int128 v29; // [rsp+20h] [rbp-188h]
  __int128 v30; // [rsp+30h] [rbp-178h] BYREF
  _BYTE v31[72]; // [rsp+40h] [rbp-168h]
  __int128 v32; // [rsp+88h] [rbp-120h]
  __int64 v33; // [rsp+98h] [rbp-110h]
  __int64 v34; // [rsp+A0h] [rbp-108h]
  __int128 v35; // [rsp+A8h] [rbp-100h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-F0h]
  __int128 v37; // [rsp+C0h] [rbp-E8h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-D8h]
  __int128 v39; // [rsp+E0h] [rbp-C8h]
  __int128 v40; // [rsp+F0h] [rbp-B8h]
  __int128 v41; // [rsp+100h] [rbp-A8h]
  __int64 v42; // [rsp+110h] [rbp-98h]
  __int128 v43; // [rsp+118h] [rbp-90h] BYREF
  __int64 v44; // [rsp+128h] [rbp-80h]
  __int128 v45; // [rsp+130h] [rbp-78h]
  __int128 v46; // [rsp+140h] [rbp-68h]
  __int128 v47; // [rsp+150h] [rbp-58h]
  __int128 v48; // [rsp+160h] [rbp-48h]
  __int64 v49; // [rsp+170h] [rbp-38h]

  *((_QWORD *)&v25 + 1) = a5;
  *(_QWORD *)&v25 = a4;
  uu_sort::ext_sort::read_write_loop(
    &v30,
    a1,
    a7,
    *(_BYTE *)(a2 + 153),
    *(_QWORD *)(a2 + 104) / 0xAuLL,
    (_QWORD *)a2,
    a3,
    v25);
  v11 = *((_QWORD *)&v30 + 1);
  if ( (_QWORD)v30 == 0x8000000000000003LL )
  {
LABEL_2:
    core::ptr::drop_in_place<uu_sort::Output>(a6);
  }
  else
  {
    v35 = v30;
    v12 = 3LL;
    if ( ((unsigned __int64)v30 ^ 0x8000000000000000LL) < 3 )
      v12 = v30 ^ 0x8000000000000000LL;
    v36 = *(_QWORD *)v31;
    switch ( v12 )
    {
      case 0LL:
        core::ptr::drop_in_place<uu_sort::Output>(a6);
        goto LABEL_18;
      case 1LL:
        v26 = *((_QWORD *)&v30 + 1);
        if ( *(_BYTE *)(a2 + 132) )
        {
          v17 = *(_QWORD *)(*((_QWORD *)&v30 + 1) + 32LL) + 24LL * *(_QWORD *)(*((_QWORD *)&v30 + 1) + 40LL);
          *(_QWORD *)v31 = *(_QWORD *)(*((_QWORD *)&v30 + 1) + 32LL);
          *(_QWORD *)&v31[8] = v17;
          *(_QWORD *)&v30 = 0LL;
          *(_QWORD *)&v31[16] = a2;
          *(_QWORD *)&v31[24] = &v26;
          v18 = *a6;
          v29 = a6[1];
          v28 = v18;
          uu_sort::print_sorted(&v30, a2, &v28);
        }
        else
        {
          v19 = *(_QWORD *)(*((_QWORD *)&v30 + 1) + 32LL);
          v20 = v19 + 24LL * *(_QWORD *)(*((_QWORD *)&v30 + 1) + 40LL);
          v21 = *a6;
          *(_OWORD *)v31 = a6[1];
          v30 = v21;
          uu_sort::print_sorted(v19, v20, a2, &v30);
        }
        v22 = &v26;
        goto LABEL_17;
      case 2LL:
        v27 = *((_QWORD *)&v30 + 1);
        v26 = *(_QWORD *)v31;
        v13 = *(_QWORD *)(*((_QWORD *)&v30 + 1) + 32LL) + 24LL * *(_QWORD *)(*((_QWORD *)&v30 + 1) + 40LL);
        *(_QWORD *)&v28 = *(_QWORD *)(*((_QWORD *)&v30 + 1) + 32LL);
        *((_QWORD *)&v28 + 1) = v13;
        *(_QWORD *)&v29 = &v27;
        v14 = *(_QWORD *)(*(_QWORD *)v31 + 32LL) + 24LL * *(_QWORD *)(*(_QWORD *)v31 + 40LL);
        *(_QWORD *)&v30 = *(_QWORD *)(*(_QWORD *)v31 + 32LL);
        *((_QWORD *)&v30 + 1) = v14;
        *(_QWORD *)v31 = &v26;
        ((void (__fastcall *)(__int128 *, __int128 *, __int128 *, __int64, __int64, __int64, __int64, __int64))itertools::merge_join::merge_by_new)(
          &v37,
          &v28,
          &v30,
          a2,
          v9,
          v10,
          v26,
          v27);
        if ( *(_BYTE *)(a2 + 132) )
        {
          v33 = v42;
          v32 = v41;
          *(_OWORD *)&v31[56] = v40;
          *(_OWORD *)&v31[40] = v39;
          *(_OWORD *)&v31[24] = v38;
          *(_OWORD *)&v31[8] = v37;
          *(_QWORD *)&v30 = 0LL;
          v34 = a2;
          v15 = *a6;
          v29 = a6[1];
          v28 = v15;
          uu_sort::print_sorted(&v30, a2, &v28);
        }
        else
        {
          *(_QWORD *)&v31[64] = v42;
          *(_OWORD *)&v31[48] = v41;
          *(_OWORD *)&v31[32] = v40;
          *(_OWORD *)&v31[16] = v39;
          *(_OWORD *)v31 = v38;
          v30 = v37;
          v23 = *a6;
          v29 = a6[1];
          v28 = v23;
          uu_sort::print_sorted(&v30, a2, &v28);
        }
        core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v26);
        v22 = &v27;
LABEL_17:
        core::ptr::drop_in_place<uu_sort::chunks::Chunk>(v22);
LABEL_18:
        v11 = 0LL;
        break;
      case 3LL:
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v28, &v35);
        uu_sort::merge::merge_with_file_limit(&v30, &v28, a2, a7);
        v11 = *((_QWORD *)&v30 + 1);
        if ( (_QWORD)v30 == 3LL )
          goto LABEL_2;
        v49 = v32;
        v48 = *(_OWORD *)&v31[56];
        v47 = *(_OWORD *)&v31[40];
        v46 = *(_OWORD *)&v31[24];
        v45 = *(_OWORD *)&v31[8];
        v43 = v30;
        v44 = *(_QWORD *)v31;
        v16 = *a6;
        *(_OWORD *)v31 = a6[1];
        v30 = v16;
        v11 = uu_sort::merge::FileMerger::write_all(&v43, a2, &v30);
        break;
    }
  }
  return v11;
}
