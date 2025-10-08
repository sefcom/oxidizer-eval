__int64 __fastcall alacritty::renderer::rects::RenderLines::update_flag(__int64 a1, __int64 *a2, unsigned __int16 a3)
{
  __int64 result; // rax
  char *v4; // rcx
  char *v5; // r9
  bool v6; // zf
  char *v7; // rdx
  char v8; // bl
  char v9; // bp
  char v10; // r14
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 inner_mut; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v20; // xmm0
  unsigned __int16 v21; // [rsp+6h] [rbp-92h] BYREF
  __int64 v22; // [rsp+8h] [rbp-90h]
  __int128 v23; // [rsp+10h] [rbp-88h] BYREF
  __int128 v24; // [rsp+20h] [rbp-78h]
  __int64 v25; // [rsp+30h] [rbp-68h]
  _QWORD v26[3]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v27[9]; // [rsp+50h] [rbp-48h] BYREF

  v21 = a3;
  result = *((unsigned __int16 *)a2 + 16);
  if ( ((unsigned __int16)~*((_WORD *)a2 + 16) & a3) == 0 )
  {
    v4 = (char *)a2 + 36;
    v5 = (char *)a2 + 41;
    v6 = (a3 & 0x200) == 0;
    if ( (a3 & 0x200) != 0 )
      v5 = (char *)a2 + 35;
    else
      v4 = (char *)a2 + 42;
    v7 = (char *)(a2 + 5);
    if ( !v6 )
      v7 = (char *)a2 + 34;
    v8 = *v7;
    v9 = *v5;
    v10 = *v4;
    v11 = *a2;
    v12 = a2[1];
    v13 = ((result & 0x20) != 0) + v12;
    v22 = a1;
    inner_mut = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(a1, &v21, v7, v4, (char *)a2 + 35);
    if ( inner_mut
      && (v16 = *(_QWORD *)(inner_mut + 24)) != 0
      && (v16 = *(_QWORD *)(inner_mut + 16) + 40 * v16, v16 != 40)
      && v8 == *(_BYTE *)(v16 - 8)
      && v9 == *(_BYTE *)(v16 - 7)
      && v10 == *(_BYTE *)(v16 - 6)
      && (result = *(_QWORD *)(v16 - 16) + 1LL, v12 == result)
      && v11 == *(_QWORD *)(v16 - 24) )
    {
      *(_QWORD *)(v16 - 16) = v13;
    }
    else
    {
      *(_QWORD *)&v23 = v11;
      *((_QWORD *)&v23 + 1) = v12;
      *(_QWORD *)&v24 = v11;
      *((_QWORD *)&v24 + 1) = v13;
      LOBYTE(v25) = v8;
      BYTE1(v25) = v9;
      BYTE2(v25) = v10;
      v18 = hashbrown::map::HashMap<K,V,S,A>::get_inner_mut(v22, &v21, v15, v16, v17);
      if ( v18 )
      {
        return alloc::vec::Vec<T,A>::push(v18 + 8, &v23);
      }
      else
      {
        v19 = alloc::alloc::Global::alloc_impl(8LL, 40LL, 0LL);
        if ( !v19 )
          alloc::alloc::handle_alloc_error(8LL, 40LL);
        *(_QWORD *)(v19 + 32) = v25;
        v20 = v23;
        *(_OWORD *)(v19 + 16) = v24;
        *(_OWORD *)v19 = v20;
        v26[0] = 1LL;
        v26[1] = v19;
        v26[2] = 1LL;
        hashbrown::map::HashMap<K,V,S,A>::insert(v27, v22, v21, v26);
        return core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alacritty::renderer::rects::RenderLine>>>(
                 v27[0],
                 v27[1]);
      }
    }
  }
  return result;
}