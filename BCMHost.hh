class BCMHost
{
public:
	BCMHost() {
		bcm_host_init();
	};
	~BCMHost() {
		bcm_host_deinit();
	}
};