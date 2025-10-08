__int64 __fastcall uu_sort::ext_sort::reader_writer(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rdi
  __int64 v20; // [rsp+0h] [rbp-138h] BYREF
  _QWORD *v21; // [rsp+8h] [rbp-130h] BYREF
  _QWORD v22[3]; // [rsp+10h] [rbp-128h] BYREF
  __int64 v23; // [rsp+28h] [rbp-110h] BYREF
  __int64 v24; // [rsp+30h] [rbp-108h]
  _QWORD *v25; // [rsp+38h] [rbp-100h]
  __int128 v26; // [rsp+40h] [rbp-F8h]
  __int128 v27; // [rsp+50h] [rbp-E8h]
  __int128 v28; // [rsp+60h] [rbp-D8h]
  __int128 v29; // [rsp+70h] [rbp-C8h]
  __int128 v30; // [rsp+80h] [rbp-B8h]
  __int64 v31; // [rsp+90h] [rbp-A8h]
  __int64 v32; // [rsp+98h] [rbp-A0h]
  _QWORD v33[3]; // [rsp+A0h] [rbp-98h] BYREF
  _OWORD v34[5]; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v35; // [rsp+108h] [rbp-30h]

  uu_sort::ext_sort::read_write_loop(
    (unsigned int)&v23,
    a1,
    a8,
    *(unsigned __int8 *)(a2 + 153),
    *(_QWORD *)(a2 + 104) / 0xAuLL,
    a2,
    a3,
    a4,
    a5,
    a6);
  v10 = v24;
  if ( v23 == 0x8000000000000003LL )
  {
    core::ptr::drop_in_place<uu_sort::Output>(a7);
  }
  else
  {
    v33[0] = v23;
    v33[1] = v24;
    v11 = 3LL;
    if ( (v23 ^ 0x8000000000000000LL) < 3 )
      v11 = v23 ^ 0x8000000000000000LL;
    v33[2] = v25;
    switch ( v11 )
    {
      case 0uLL:
        core::ptr::drop_in_place<uu_sort::Output>(a7);
        goto LABEL_22;
      case 1uLL:
        v22[0] = v24;
        if ( *(_BYTE *)(a2 + 132) )
        {
          v16 = *(_QWORD *)(v24 + 32) + 24LL * *(_QWORD *)(v24 + 40);
          v25 = *(_QWORD **)(v24 + 32);
          *(_QWORD *)&v26 = v16;
          v23 = 0LL;
          *((_QWORD *)&v26 + 1) = a2;
          *(_QWORD *)&v27 = v22;
          v17 = uu_sort::print_sorted(&v23, a2, a7);
        }
        else
        {
          v17 = uu_sort::print_sorted(
                  *(_QWORD *)(v24 + 32),
                  *(_QWORD *)(v24 + 32) + 24LL * *(_QWORD *)(v24 + 40),
                  a2,
                  a7);
        }
        v10 = v17;
        if ( v17 )
        {
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(v22);
          return v10;
        }
        v18 = v22;
        goto LABEL_21;
      case 2uLL:
        v20 = v24;
        v21 = v25;
        v12 = *(_QWORD *)(v24 + 32) + 24LL * *(_QWORD *)(v24 + 40);
        v22[0] = *(_QWORD *)(v24 + 32);
        v22[1] = v12;
        v22[2] = &v20;
        v13 = v25[4] + 24LL * v25[5];
        v23 = v25[4];
        v24 = v13;
        v25 = &v21;
        ((void (__fastcall *)(_OWORD *, _QWORD *, __int64 *, __int64, __int64, __int64, __int64, _QWORD *))itertools::merge_join::merge_by_new)(
          v34,
          v22,
          &v23,
          a2,
          v8,
          v9,
          v20,
          v21);
        if ( *(_BYTE *)(a2 + 132) )
        {
          v31 = v35;
          v30 = v34[4];
          v29 = v34[3];
          v28 = v34[2];
          v27 = v34[1];
          v26 = v34[0];
          v23 = 0LL;
          v32 = a2;
          v14 = uu_sort::print_sorted(&v23, a2, a7);
        }
        else
        {
          v14 = uu_sort::print_sorted(v34, a2, a7);
        }
        v10 = v14;
        if ( v14 )
        {
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v21);
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v20);
        }
        else
        {
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&v21);
          v18 = &v20;
LABEL_21:
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(v18);
LABEL_22:
          v10 = 0LL;
        }
        break;
      case 3uLL:
        <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v23, v33);
        v15 = uu_sort::merge::merge_with_file_limit(&v23, a2, a7, a8);
        if ( !v15 )
          goto LABEL_22;
        return v15;
    }
  }
  return v10;
}