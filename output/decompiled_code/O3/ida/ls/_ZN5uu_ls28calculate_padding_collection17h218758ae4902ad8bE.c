__int64 __fastcall uu_ls::calculate_padding_collection(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r13
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r12
  __int64 v18; // rax
  _DWORD *metadata; // rax
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 result; // rax
  char v26; // [rsp+Bh] [rbp-EDh]
  char v27; // [rsp+Ch] [rbp-ECh]
  char v28; // [rsp+Dh] [rbp-EBh]
  char v29; // [rsp+Eh] [rbp-EAh]
  char v30; // [rsp+Fh] [rbp-E9h]
  __int64 v31; // [rsp+10h] [rbp-E8h]
  __int64 v32; // [rsp+18h] [rbp-E0h]
  __int64 v33; // [rsp+20h] [rbp-D8h]
  __int64 v34; // [rsp+28h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-C8h]
  __int64 v36; // [rsp+38h] [rbp-C0h]
  __int64 v37; // [rsp+40h] [rbp-B8h]
  __int64 v38; // [rsp+48h] [rbp-B0h]
  __int64 v39; // [rsp+50h] [rbp-A8h]
  __int64 v40; // [rsp+58h] [rbp-A0h]
  __int64 v41; // [rsp+60h] [rbp-98h]
  unsigned __int64 v44; // [rsp+78h] [rbp-80h]
  __int64 v45[2]; // [rsp+88h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-60h]
  __int64 v47; // [rsp+A0h] [rbp-58h]
  __int64 v48; // [rsp+A8h] [rbp-50h]
  __int64 v49; // [rsp+B0h] [rbp-48h]
  _QWORD v50[8]; // [rsp+B8h] [rbp-40h] BYREF

  v50[0] = a2;
  v50[1] = a2 + 304 * a3;
  v30 = *(_BYTE *)(a4 + 233);
  v29 = *(_BYTE *)(a4 + 234);
  v44 = *(_QWORD *)(a4 + 216);
  v27 = *(_BYTE *)(a4 + 241);
  v28 = *(_BYTE *)(a4 + 248);
  v26 = *(_BYTE *)(a4 + 235);
  v6 = 1LL;
  v35 = 1LL;
  v7 = 1LL;
  v8 = 1LL;
  v31 = 1LL;
  v34 = 1LL;
  v33 = 1LL;
  v32 = 1LL;
  v9 = 1LL;
LABEL_2:
  v38 = v6;
  v36 = v8;
  v37 = v7;
  while ( !v30 )
  {
    v18 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v50);
    if ( !v18 )
      goto LABEL_17;
    v11 = v18;
    if ( v29 )
    {
LABEL_11:
      metadata = uu_ls::PathData::get_metadata(v11, a5);
      if ( metadata )
      {
        uu_ls::get_block_size(metadata[14], *((_QWORD *)metadata + 12), v44, v27);
        uu_ls::display_size();
        v20 = v46;
        core::ptr::drop_in_place<alloc::string::String>(v45);
        v35 = core::cmp::max_by(v20, v35);
      }
    }
LABEL_3:
    if ( v28 == 1 )
    {
      v41 = *(_QWORD *)(v11 + 64);
      uu_ls::display_dir_entry_size(v45, v11, a4, a5);
      v21 = v45[1];
      v22 = v46;
      v23 = v47;
      v39 = v48;
      v40 = v49;
      v32 = core::cmp::max_by(v45[0], v32);
      v33 = core::cmp::max_by(v21, v33);
      v34 = core::cmp::max_by(v22, v34);
      if ( v26 )
        v31 = core::cmp::max_by(v41, v31);
      v7 = 0LL;
      v8 = 0LL;
      v6 = 0LL;
      if ( a3 != 1 )
      {
        v8 = core::cmp::max_by(v39, v36);
        v7 = core::cmp::max_by(v40, v37);
        v24 = core::cmp::max_by(v23, v38);
        v6 = core::cmp::max_by(v24, v8);
      }
      goto LABEL_2;
    }
  }
  while ( 1 )
  {
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v50);
    if ( !v10 )
      break;
    v11 = v10;
    v12 = uu_ls::PathData::get_metadata(v10, a5);
    if ( v12 )
    {
      uu_ls::display_inode((__int64)v45, *((_QWORD *)v12 + 5), v13, v14, v15, v16);
      v17 = v46;
      core::ptr::drop_in_place<alloc::string::String>(v45);
      v9 = core::cmp::max_by(v17, v9);
      if ( v29 )
        goto LABEL_11;
      goto LABEL_3;
    }
  }
LABEL_17:
  *a1 = v9;
  a1[1] = v32;
  a1[2] = v33;
  a1[3] = v34;
  a1[4] = v31;
  a1[5] = v38;
  a1[6] = v36;
  a1[7] = v37;
  result = v35;
  a1[8] = v35;
  return result;
}
