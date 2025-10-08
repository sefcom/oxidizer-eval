long long starship::modules::hg_state::get_state_description(unsigned long long a0, unsigned long long a1, unsigned long long a2[15])
{
    char v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    char v3;  // [bp-0x110]
    unsigned long long v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0x100]
    char v6;  // [bp-0xf8]
    unsigned long long v7;  // [bp-0xf0]
    unsigned long long v8;  // [bp-0xe8]
    char v9;  // [bp-0xe0]

    v3.join(a0, a1, ".hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 3);
    v0.join(v4, v5, "rebasestateupdatestatebisect.stategraftstatetransplantjournalhistedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 11);
    std::fs::metadata(&v9, v1, v2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    if ((int)*((long long *)&v9) != 2)
        return a2[2];
    v3.join(a0, a1, ".hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 3);
    v0.join(v4, v5, "updatestatebisect.stategraftstatetransplantjournalhistedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 11);
    std::fs::metadata(&v9, v1, v2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    if ((int)*((long long *)&v9) != 2)
        return a2[4];
    v3.join(a0, a1, ".hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 3);
    v0.join(v4, v5, "bisect.stategraftstatetransplantjournalhistedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 12);
    std::fs::metadata(&v9, v1, v2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    if ((int)*((long long *)&v9) != 2)
        return a2[6];
    v3.join(a0, a1, ".hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 3);
    v0.join(v4, v5, "graftstatetransplantjournalhistedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 10);
    std::fs::metadata(&v9, v1, v2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    if ((int)*((long long *)&v9) != 2)
        return a2[10];
    v3.join(a0, a1, ".hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 3);
    v0.join(v4, v5, "transplantjournalhistedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 10);
    v6.join(v1, v2, "journalhistedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 7);
    std::fs::metadata(&v9, v7, v8);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
    core::ptr::drop_in_place<std::path::PathBuf>(&v6);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    if ((int)*((long long *)&v9) != 2)
        return a2[12];
    v3.join(a0, a1, ".hgtopicbookmarks.currentError in module `hg_state`:\nsrc/modules/hg_state.rs", 3);
    v0.join(v4, v5, "histedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 14);
    std::fs::metadata(&v9, v1, v2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    if ((int)*((long long *)&v9) != 2)
        return a2[14];
    starship::modules::hg_state::is_merge_state(&v9, a0, a1);
    core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(&v9);
    return (!v9 ? a2[0] : 0);
}
