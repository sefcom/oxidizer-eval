__int64 __fastcall bat::assets::HighlightingAssets::get_syntax_set(__int64 a1, __int64 a2)
{
  once_cell::unsync::OnceCell<T>::get_or_try_init(a1, a2 + 24, a2);
  return a1;
}