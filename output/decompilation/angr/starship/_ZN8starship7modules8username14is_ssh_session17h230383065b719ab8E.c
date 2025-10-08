char starship::modules::username::is_ssh_session()
{
    char *v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]

    v1 = "SSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs";
    v2 = 14;
    v3 = "SSH_CLIENTSSH_TTYsrc/modules/utils/directory.rsUnable to stat() directory: Error in module `vagrant`:\nsrc/modules/vagrant.rs";
    v4 = 10;
    v5 = "SSH_TTYsrc/modules/utils/directory.rsUnable to stat() directory: Error in module `vagrant`:\nsrc/modules/vagrant.rs";
    v6 = 7;
    v0 = &v1;
    return v0.any();
}
