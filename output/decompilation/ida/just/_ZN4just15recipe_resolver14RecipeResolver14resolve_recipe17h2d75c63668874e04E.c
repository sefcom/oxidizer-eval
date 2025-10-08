__int64 __fastcall just::recipe_resolver::RecipeResolver::resolve_recipe(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  volatile signed __int64 **v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rax
  __int64 result; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  volatile signed __int64 *v22; // rax
  __int64 v23; // rt0
  char v24; // of
  volatile signed __int64 *v25; // r15
  __int128 v26; // [rsp+0h] [rbp-2B8h] BYREF
  __int128 v27; // [rsp+10h] [rbp-2A8h]
  __int128 v28; // [rsp+20h] [rbp-298h]
  __int128 v29; // [rsp+30h] [rbp-288h]
  __int128 v30; // [rsp+40h] [rbp-278h]
  volatile signed __int64 *v31; // [rsp+58h] [rbp-260h]
  __int128 v32; // [rsp+60h] [rbp-258h] BYREF
  __int64 v33; // [rsp+70h] [rbp-248h]
  _BYTE dest[272]; // [rsp+80h] [rbp-238h] BYREF
  _BYTE v35[72]; // [rsp+190h] [rbp-128h] BYREF
  __int128 v36; // [rsp+1D8h] [rbp-E0h]
  _BYTE src[168]; // [rsp+1E8h] [rbp-D0h] BYREF

  v6 = a4 + 18;
  v7 = just::token::Token::lexeme(a4 + 18);
  v9 = (volatile signed __int64 **)alloc::collections::btree::map::BTreeMap<K,V,A>::get(a2[4], a2[5], v7, v8);
  if ( v9 )
  {
    if ( _InterlockedIncrement64(*v9) > 0 )
    {
      *(_QWORD *)a1 = *v9;
      *(_BYTE *)(a1 + 72) = 37;
      return core::ptr::drop_in_place<just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>(a4);
    }
    goto LABEL_13;
  }
  v10 = just::token::Token::lexeme(v6);
  alloc::vec::Vec<T,A>::push(a3, v10, v11, &off_430D20);
  v12 = a4[4] + 48LL * a4[5];
  *(_QWORD *)&v26 = a4[4];
  *((_QWORD *)&v26 + 1) = v12;
  *(_QWORD *)&v27 = a2;
  *((_QWORD *)&v27 + 1) = a4;
  *(_QWORD *)&v28 = a3;
  ((void (__fastcall *)(_BYTE *, __int128 *))core::iter::traits::iterator::Iterator::collect)(dest, &v26);
  v13 = dest[72];
  if ( dest[72] != 37 )
  {
    *(_QWORD *)&v35[64] = *(_QWORD *)&dest[64];
    *(_OWORD *)&v35[48] = *(_OWORD *)&dest[48];
    *(_OWORD *)&v35[32] = *(_OWORD *)&dest[32];
    *(_OWORD *)&v35[16] = *(_OWORD *)&dest[16];
    *(_OWORD *)v35 = *(_OWORD *)dest;
    *(_DWORD *)(a1 + 76) = *(_DWORD *)&dest[76];
    *(_DWORD *)(a1 + 73) = *(_DWORD *)&dest[73];
    *(_QWORD *)(a1 + 64) = *(_QWORD *)&v35[64];
    v19 = *(_OWORD *)v35;
    v20 = *(_OWORD *)&v35[16];
    v21 = *(_OWORD *)&v35[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v35[48];
    *(_OWORD *)(a1 + 32) = v21;
    *(_OWORD *)(a1 + 16) = v20;
    *(_OWORD *)a1 = v19;
    *(_BYTE *)(a1 + 72) = v13;
    return core::ptr::drop_in_place<just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>(a4);
  }
  v32 = *(_OWORD *)dest;
  v33 = *(_QWORD *)&dest[16];
  v14 = *(_QWORD *)(a3 + 16);
  if ( v14 )
    *(_QWORD *)(a3 + 16) = v14 - 1;
  memcpy(dest, a4, 0x100uLL);
  just::unresolved_recipe::<impl just::recipe::Recipe<just::unresolved_dependency::UnresolvedDependency>>::resolve(
    v35,
    dest,
    a2[1],
    a2[2],
    &v32);
  result = -*(_QWORD *)v35;
  v26 = *(_OWORD *)&v35[8];
  v27 = *(_OWORD *)&v35[24];
  v28 = *(_OWORD *)&v35[40];
  v29 = *(_OWORD *)&v35[56];
  v30 = v36;
  if ( __OFSUB__(-*(_QWORD *)v35, 1LL) )
  {
    *(_OWORD *)(a1 + 64) = v30;
    v16 = v26;
    v17 = v27;
    v18 = v28;
    *(_OWORD *)(a1 + 48) = v29;
    *(_OWORD *)(a1 + 32) = v18;
    *(_OWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v16;
    return result;
  }
  memcpy(&dest[104], src, 0xA8uLL);
  *(_OWORD *)&dest[24] = v26;
  *(_OWORD *)&dest[40] = v27;
  *(_OWORD *)&dest[56] = v28;
  *(_OWORD *)&dest[72] = v29;
  *(_OWORD *)&dest[88] = v30;
  *(_QWORD *)dest = 1LL;
  *(_QWORD *)&dest[8] = 1LL;
  *(_QWORD *)&dest[16] = *(_QWORD *)v35;
  v22 = (volatile signed __int64 *)alloc::boxed::Box<T>::new(dest);
  v31 = v22;
  v23 = _InterlockedIncrement64(v22);
  if ( (v23 < 0) ^ v24 | (v23 == 0) )
LABEL_13:
    BUG();
  v25 = v22;
  result = just::table::Table<V>::insert(a2 + 4, v22);
  *(_QWORD *)a1 = v25;
  *(_BYTE *)(a1 + 72) = 37;
  return result;
}