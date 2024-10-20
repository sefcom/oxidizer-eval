__int64 __fastcall uu_df::filesystem::mount_info_from_path::{{closure}}(__int64 *a1)
{
  __int64 v2; // [rsp+0h] [rbp-8h]

  v2 = *a1;
  core::ptr::drop_in_place<(&uucore::features::fsext::MountInfo,std::path::PathBuf)>();
  return v2;
}
