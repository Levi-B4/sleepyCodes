#ifndef RANKER_H
#define RANKER_H


class Ranker{
	public:
		Ranker();
		bool isNewRank();
		void read();
		void add(int elo);

	private:
		bool newRank = false;
		int rankOnLoad = 0;
		int elo = 5;
};


#endif //RANKER_H
