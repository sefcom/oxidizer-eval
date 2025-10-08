__int64 __fastcall bat::assets::lazy_theme_set::LazyThemeSet::get(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _BYTE v5[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+8h] [rbp-50h]

  v3 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(*a1, a1[1], a2, a3);
  if ( !v3 )
    return 0LL;
  once_cell::unsync::OnceCell<T>::get_or_try_init(v5, v3 + 24, v3);
  if ( v5[0] == 13 )
    return v6;
  core::ptr::drop_in_place<core::result::Result<&syntect::highlighting::theme::Theme,bat::error::Error>>(v5);
  return 0LL;
}