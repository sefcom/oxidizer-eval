char __fastcall fd::exec::CommandSet::execute_batch(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // bl
  __int64 v25; // [rsp+8h] [rbp-100h]
  __int128 v26; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-E8h]
  __int64 v28; // [rsp+30h] [rbp-D8h]
  __int64 v29; // [rsp+38h] [rbp-D0h]
  __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A8h]
  _QWORD v34[3]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+80h] [rbp-88h] BYREF
  __int128 v36; // [rsp+90h] [rbp-78h]
  __int128 v37; // [rsp+A0h] [rbp-68h]
  __int128 v38; // [rsp+B0h] [rbp-58h]
  __int128 v39; // [rsp+C0h] [rbp-48h]
  __int64 v40; // [rsp+D0h] [rbp-38h]

  v29 = a6;
  v30 = a4;
  *(_QWORD *)&v35 = a1;
  *((_QWORD *)&v35 + 1) = a1 + 24 * a2;
  *(_QWORD *)&v36 = &v30;
  core::iter::traits::iterator::Iterator::collect(&v32, &v35);
  if ( __OFSUB__(0LL, (_QWORD)v32) )
  {
    fd::exec::command::handle_cmd_error(0LL, *((__int64 *)&v32 + 1), v8);
    core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>,fd::exec::job::batch<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>>::{{closure}}>>(a3);
    return 4;
  }
  else
  {
    v27 = v33;
    v26 = v32;
    v40 = *((_QWORD *)a3 + 10);
    v39 = a3[4];
    v9 = *a3;
    v10 = a3[1];
    v11 = a3[2];
    v38 = a3[3];
    v37 = v11;
    v36 = v10;
    v35 = v9;
    while ( 1 )
    {
      <core::iter::adapters::filter_map::FilterMap<I,F> as core::iter::traits::iterator::Iterator>::next(v34, &v35);
      if ( v34[0] == 0x8000000000000000LL )
        break;
      v25 = v34[0];
      v12 = v34[1];
      if ( v27 )
      {
        v13 = v34[2];
        v14 = *((_QWORD *)&v26 + 1);
        v28 = *((_QWORD *)&v26 + 1);
        v15 = 0LL;
        while ( 1 )
        {
          v16 = fd::exec::CommandBuilder::push(v14, v12, v13, a5, v29);
          v31 = v16;
          if ( v16 )
            break;
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v31);
          v15 -= 336LL;
          v14 += 336LL;
          if ( -336 * v27 == v15 )
            goto LABEL_4;
        }
        fd::exec::command::handle_cmd_error(v28 - v15 + 80, v16, v17);
        core::mem::drop(v25, v12);
        core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>,fd::exec::job::batch<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>>::{{closure}}>>(&v35);
LABEL_12:
        core::ptr::drop_in_place<alloc::vec::Vec<fd::exec::CommandBuilder>>(&v26);
        return 4;
      }
LABEL_4:
      core::mem::drop(v25, v12);
    }
    core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>,fd::exec::job::batch<core::iter::adapters::flatten::Flatten<crossbeam_channel::channel::IntoIter<fd::walk::Batch>>>::{{closure}}>>(&v35);
    v19 = *((_QWORD *)&v26 + 1);
    if ( v27 )
    {
      v20 = 336 * v27;
      while ( 1 )
      {
        v21 = fd::exec::CommandBuilder::finish(v19);
        *(_QWORD *)&v35 = v21;
        if ( v21 )
          break;
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v35);
        v19 += 336LL;
        v20 -= 336LL;
        if ( !v20 )
        {
          v19 = *((_QWORD *)&v26 + 1);
          v23 = v27;
          goto LABEL_20;
        }
      }
      fd::exec::command::handle_cmd_error(v19 + 80, v21, v22);
      goto LABEL_12;
    }
    v23 = 0LL;
LABEL_20:
    v24 = fd::exit_codes::merge_exitcodes(v19, v19 + 336 * v23);
    core::ptr::drop_in_place<alloc::vec::Vec<fd::exec::CommandBuilder>>(&v26);
    return v24;
  }
}